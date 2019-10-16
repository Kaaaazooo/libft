# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/10 19:12:22 by sabrugie          #+#    #+#              #
#    Updated: 2019/10/16 17:10:33 by sabrugie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
NAME_BONUS = libft_bonus.a
CC = gcc
HEADER = ./libft.h
SRCS_P = ./
CFLAGS = -Wall -Werror -Wextra $(OPTION)
OPTION = -I $(HEADER)
SRCS =	$(SRCS_P)ft_atoi.c $(SRCS_P)ft_bzero.c $(SRCS_P)ft_isalnum.c \
		$(SRCS_P)ft_isalpha.c $(SRCS_P)ft_isascii.c $(SRCS_P)ft_isdigit.c \
		$(SRCS_P)ft_isprint.c $(SRCS_P)ft_memcpy.c $(SRCS_P)ft_memmove.c \
		$(SRCS_P)ft_memset.c $(SRCS_P)ft_putnbr_fd.c $(SRCS_P)ft_strchr.c \
		$(SRCS_P)ft_strlcat.c $(SRCS_P)ft_strlcpy.c $(SRCS_P)ft_strlen.c \
		$(SRCS_P)ft_strncmp.c $(SRCS_P)ft_strnstr.c $(SRCS_P)ft_strrchr.c \
		$(SRCS_P)ft_tolower.c $(SRCS_P)ft_toupper.c $(SRCS_P)ft_memccpy.c \
		$(SRCS_P)ft_memchr.c $(SRCS_P)ft_memcmp.c $(SRCS_P)ft_substr.c \
		$(SRCS_P)ft_strdup.c $(SRCS_P)ft_strjoin.c $(SRCS_P)ft_strsub.c \
		$(SRCS_P)ft_putstr_fd.c $(SRCS_P)ft_putendl_fd.c \
		$(SRCS_P)ft_putchar_fd.c $(SRCS_P)ft_strcpy.c $(SRCS_P)ft_strcat.c \
		$(SRCS_P)ft_strtrim.c $(SRCS_P)ft_itoa.c  $(SRCS_P)ft_strmapi.c \
		$(SRCS_P)ft_strndup.c $(SRCS_P)ft_split.c

SRCS_BONUS =	$(SRCS_P)ft_lstadd_front_bonus.c $(SRCS_P)ft_lstdelone_bonus.c \
				$(SRCS_P)ft_lstiter_bonus.c $(SRCS_P)ft_lstlast_bonus.c \
				$(SRCS_P)ft_lstnew_bonus.c $(SRCS_P)ft_lstsize_bonus.c \
				$(SRCS_P)ft_lstadd_back_bonus.c $(SRCS_P)ft_lstclear_bonus.c \
				$(SRCS_P)ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)
bonus: $(NAME_BONUS)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)
$(NAME_BONUS): $(OBJS_BONUS)
	ar -rc $(NAME_BONUS) $(OBJS_BONUS)
	ranlib $(NAME_BONUS)

clean:
	rm -rf $(OBJS)
clean_bonus:
	rm -rf $(OBJS_BONUS)

fclean: clean
	rm -rf $(NAME)
fclean_bonus: clean_bonus
	rm -rf $(NAME_BONUS)

re: fclean all
re_bonus: fclean_bonus bonus
