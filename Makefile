NAME = libftprintf.a
SRCS =  ft_printf.c \
		ft_print_char.c \
		ft_print_digit.c \
		ft_print_perc.c \
		ft_print_string.c \
		ft_print_unsigned.c \
		ft_print_pointer.c \
		ft_print_hex.c \
		ft_putnbr_base.c
CC		= gcc
OBJS	= ${SRCS:.c=.o}
LOBJS	= $(addprefix libft/, *.o)
HEADER	= ft_printf.h
CFLAGS	= -Wall -Wextra -Werror $(IDIR)
RM		= rm -f

all:		${NAME}

$(NAME):	${SRCS} ${HEADER}
	make -C libft/
	${CC} ${CFLAGS} -c ${SRCS}
	ar rc $(NAME) ${OBJS} ${LOBJS}

clean:
	${RM} ${OBJS} ${BONOBJS}
	make clean -C libft/

fclean:		clean
	${RM} ${NAME}
	make fclean -C libft/
			

re:			fclean all