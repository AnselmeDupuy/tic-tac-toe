# Makefile

NAME = tictactoe

SRCS = main.c \
	   tic-tac-toe.h

all :  $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean: 
	rm -f $(NAME)

re: fclean all