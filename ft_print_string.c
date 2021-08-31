#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
		i++;
	write(1, &str[0], i);
	return (i);
}
