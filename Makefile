NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c
OBJS = ft_isalpha.o

.PHONY: all clean fclean re
all:
	$(CC) $(CFLAGS) $(SRCS)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all
