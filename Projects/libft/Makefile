#test program compilation.
CFLAGS = -Wall -Werror -Wextra
NAME = test
FILE_TO_TEST = ft_memcpy

All : $(NAME)

$(NAME) : main.o $(FILE_TO_TEST).o
	cc $(CFLAGS) -o $(NAME) main.o $(FILE_TO_TEST).o

main.o : ft_main.c types.h
	cc $(CFLAGS) -c ft_main.c

$(FILE_TO_TEST).o : $(FILE_TO_TEST).c types.ht
	cc $(CFLAGS) -c $(FILE_TO_TEST).c

clean :
	rm -rf $(NAME) main.o $(FILE_TO_TEST)