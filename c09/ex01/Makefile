.PHONY: all clean fclean re

OBJECTS= srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_swap.o srcs/ft_strcmp.o srcs/ft_strlen.o

all: libft.a

libft.a: $(OBJECTS)
	ar rcs $@ $^

srcs/%.o: srcs/%.c
	gcc -Wall -Wextra -Werror $< -c -o $@ -I./includes

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f libft.a

re: fclean all
