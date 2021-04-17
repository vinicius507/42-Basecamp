.PHONY: all clean fclean
NAME= ft_cat
CC= gcc
CC_FLAGS= -Wall -Wextra -Werror
DEPS= ft_cat.h
OBJECTS= utils.o main.o ft_cat.o

all: $(NAME)

$(NAME): $(DEPS) $(OBJECTS)
	$(CC) $(CC_CLAGS) $(OBJECTS) -o $@

%.o: %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
