# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 12:36:32 by mduran-l          #+#    #+#              #
#    Updated: 2023/12/05 12:36:40 by mduran-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#https://medium.com/@Anatolii_Zhadan/makefile-to-create-a-library-in-c-3c2ad3d281
NAME = libft.a
INC = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c \
	ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c \
	ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c \
	ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strnstr.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCS_BONUS =
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
.PHONY: all clean fclean re bonus
all: $(NAME)

# Avoid relink
# https://stackoverflow.com/questions/42718392/how-to-avoid-my-makefile-to-relink
%.o:%.c
	@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

$(NAME): $(OBJS)
	@$(AR) rcs $@ $^

fclean: clean
	@$(RM) -f $(NAME)

clean:
	@$(RM) -f $(OBJS)

#bonus: $(OBJS_BONUS)
#	ar rcs $() $(OBJS_BONUS)

re: fclean all
