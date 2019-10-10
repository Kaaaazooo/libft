# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/10 19:12:22 by sabrugie          #+#    #+#              #
#    Updated: 2019/10/10 16:27:12 by sabrugie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
HEADER = ./includes/
SRCS_P = ./srcs/
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
		$(SRCS_P)ft_strndup.c

OBJS = $(SRCS:.c=.o)
all: $(NAME)
$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
