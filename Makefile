NAME = libftprintf.a

CCW = cc -Wall -Wextra -Werror

M_SRC = ft_printf.c ft_print_hex.c ft_print_num.c ft_print_ptr.c ft_print_unsigned.c ft_putchar.c ft_putstr.c

M_OBJ = $(M_SRC:.c=.o)

all: $(NAME)

$(NAME): $(M_SRC)
	$(CCW) -c $(M_SRC)
	ar rc $(NAME) $(M_OBJ)

clean:
	rm -f $(M_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean

.PHONY: all fclean clean re
