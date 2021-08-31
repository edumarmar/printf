#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char *base)
{
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
		return (ft_putnbr_base(n, base));
}
