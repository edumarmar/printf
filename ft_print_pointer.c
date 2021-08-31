#include "ft_printf.h"

int	ft_print_pointer(unsigned long long add)
{
	int	len;

	if (add == 0)
	{
		ft_putstr("0x0");
		return (3);
	}
	len = 2;
	ft_putstr("0x");
	len += ft_putnbr_base(add, "0123456789abcdef");
	return (len);
}
