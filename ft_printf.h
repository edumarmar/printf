#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int			ft_printf(const char *string, ...);
int			argument_chosen(va_list args, int typevar);
int			ft_print_char(int c);
int			ft_print_perc(void);
int			ft_print_string(char *str);
int			ft_print_digit(int n);
int			ft_print_unsigned(unsigned int n);
int			ft_print_pointer(unsigned long long ptr);
int			ft_putnbr_base(unsigned long long nbr, char *base);
int			ft_print_pointer(unsigned long long add);
int			ft_print_hex(unsigned int n, char *base);

#endif