#include "ft_printf.h"

static char	*ft_fill(char *x, unsigned int number, long int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (x);
}

static long int	ft_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char				*x;
	long int			len;
	long long int		number;

	len = ft_len(n);
	x = (char *)malloc(sizeof(char) * (len + 1));
	if (!(x))
		return (NULL);
	x[len--] = '\0';
	if (n == 0)
		x[0] = '0';
	number = n;
	x = ft_fill(x, number, len);
	return (x);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*charnum;
	int		len;

	charnum = ft_uitoa(n);
	len = ft_print_string(charnum);
	free(charnum);
	return (len);
}
