#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcorie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 04:10:51 by kcorie            #+#    #+#              #
#    Updated: 2019/07/18 15:28:57 by kcorie           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

HEADER = includes

DIR = source

C_FILES = $(addprefix $(DIR)/, ft_atoi.c ft_putchar_fd.c ft_strcmp.c ft_strmap.c \
			ft_strstr.c ft_bzero.c ft_memalloc.c ft_putendl.c ft_strcpy.c ft_strmapi.c \
			ft_strsub.c ft_isalnum.c ft_memccpy.c ft_putendl_fd.c ft_strdel.c ft_strncat.c \
			ft_strtrim.c ft_isalpha.c ft_memchr.c ft_putnbr.c ft_strdup.c ft_strncmp.c ft_tolower.c \
			ft_isascii.c ft_memcmp.c ft_putnbr_fd.c ft_strequ.c ft_strncpy.c ft_toupper.c \
			ft_isdigit.c ft_memcpy.c ft_putstr.c ft_striter.c ft_strnequ.c ft_isprint.c ft_memdel.c ft_putstr_fd.c \
			ft_striteri.c ft_strnew.c ft_itoa.c ft_memmove.c ft_strcat.c ft_strjoin.c ft_strnstr.c ft_memset.c \
			ft_strchr.c ft_strlcat.c ft_strrchr.c ft_putchar.c ft_strclr.c ft_strlen.c ft_strsplit.c ft_lstnew.c \
			ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_sumw.c ft_sw.c ft_point_w.c \
			ft_is_space.c ft_lstsize.c)

O_FILES = ${C_FILES:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(O_FILES)
	@ar rc $@ $<
	@ranlib $@

$(DIR)/%.o: $(DIR)/%.c
	$(CC) $(CFLAGS) -I./$(HEADER) -c $< -o $@

clean:
	@/bin/rm -f $(O_FILES)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
