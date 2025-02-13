# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 12:36:32 by mduran-l          #+#    #+#              #
#    Updated: 2023/12/13 14:43:31 by mduran-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#https://medium.com/@Anatolii_Zhadan/makefile-to-create-a-library-in-c-3c2ad3d281
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HDR = libft.h
SRCS = ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c \
	ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c \
	ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c \
	ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strnstr.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

.PHONY: all clean fclean re bonus
all: $(NAME) bonus

# Avoid relink
# https://stackoverflow.com/questions/42718392/how-to-avoid-my-makefile-to-relink
%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HDR)
	@$(AR) rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS) $(HDR)
	@$(AR) rcs $(NAME) $(OBJS) $(OBJS_BONUS)

fclean: clean
	@$(RM) -f $(NAME)

clean:
	@$(RM) -f $(OBJS) $(OBJS_BONUS)

re: fclean all
