.PHONY: all clean fclean

NAME= ft_display_file
CC= gcc
CC_FLAGS= -Wall -Wextra -Werror
DEPS= ft_display_file.h
OBJECTS= ft_display_file.o  utils.o main.o

all: $(NAME)

$(NAME): $(DEPS) $(OBJECTS)
	$(CC) $(CC_FLAGS) $(OBJECTS) -o $@

%.o: %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
