CC=GCC
FLAGS=-Wall -Wextra -Werror
HEADER=header.h
FILES=main.c functions.c
BINARY=ft_display_file

all:
	$(CC) $(FLAGS) -I $(HEADER) $(FILES) -o $(BINARY)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(BINARY)

re: fclean all
