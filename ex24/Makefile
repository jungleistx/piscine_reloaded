CC=gcc
FLAGS=-Wall -Wextra -Werror
SRCS=srcs/
HEADER=includes/
FILES=$(SRCS)/ft_putchar.c $(SRCS)/ft_putstr.c $(SRCS)/ft_strcmp.c \
	$(SRCS)/ft_strlen.c $(SRCS)/ft_swap.c
OBJECTS=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
LIB=libft.a

all: $(LIB)

$(LIB): $(OBJECTS)
	ar rc $(LIB) $(OBJECTS) 
	
$(OBJECTS): $(FILES)
	$(CC) $(FLAGS) -I $(HEADER) -c $(FILES)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(LIB)
	
re: fclean all
