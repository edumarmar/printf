#include "ft_printf.h"

int	ft_print_digit(int n)
{
	char	*nchar;
	int		len;

	nchar = ft_itoa(n);
	len = ft_print_string(nchar);
	free(nchar);
	return (len);
}
