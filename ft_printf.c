#include "ft_printf.h"

int	argument_chosen(va_list args, int typevar)
{
	int	numchars;

	numchars = 0;
	if (typevar == 'c')
		numchars = ft_print_char(va_arg(args, int));
	else if (typevar == 's')
		numchars = ft_print_string(va_arg(args, char *));
	else if (typevar == 'p')
		numchars = ft_print_pointer(va_arg(args, unsigned long long));
	else if (typevar == 'i' || typevar == 'd' )
		numchars = ft_print_digit(va_arg(args, int));
	else if (typevar == 'u')
		numchars = ft_print_unsigned(va_arg(args, unsigned int));
	else if (typevar == 'x')
		numchars = ft_print_hex(va_arg(args, unsigned int), \
		 "0123456789abcdef");
	else if (typevar == 'X')
		numchars = ft_print_hex(va_arg(args, unsigned int), \
		 "0123456789ABCDEF");
	else if (typevar == '%')
		numchars = ft_print_perc();
	return (numchars);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		numchars;

	va_start(args, str);
	i = 0;
	numchars = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
			numchars += argument_chosen(args, str[++i]);
		else
		{
			ft_putchar(str[i]);
			numchars++;
		}
		i++;
	}
	va_end(args);
	return (numchars);
}
