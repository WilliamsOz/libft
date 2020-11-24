# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/10 14:45:54 by user42            #+#    #+#              #
#    Updated: 2020/11/20 14:51:43 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
FILESC = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_calloc.c ft_strlen.c ft_strmapi.c ft_substr.c ft_isprint.c \
ft_isascii.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_toupper.c ft_tolower.c \
ft_strdup.c ft_itoa.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c \
ft_strlcat.c ft_strnstr.c ft_atoi.c ft_bzero.c ft_strjoin.c ft_split.c \
ft_strtrim.c ft_memcmp.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c
FILESO = ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
ft_putnbr_fd.o ft_calloc.o ft_strlen.o ft_strmapi.o ft_substr.o ft_isprint.o \
ft_isascii.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_toupper.o ft_tolower.o \
ft_strdup.o ft_itoa.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_strlcpy.o \
ft_strlcat.o ft_strnstr.o ft_atoi.o ft_bzero.o ft_strjoin.o ft_split.o \
ft_strtrim.o ft_memcmp.o ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
ft_memchr.o
BONUSC = ft_lstclear.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c
BONUSO = ft_lstclear.o ft_lstnew.o ft_lstadd_front.o ft_lstsize.o \
ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstiter.o ft_lstmap.o

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) -c $(FILESC)
	ar -rcs $(NAME) $(FILESO)

clean :
	rm -rf $(FILESO) $(BONUSO)

fclean : clean
	rm -rf $(NAME)

re : fclean all

bonus :	fclean
	gcc $(FLAGS) -c $(FILESC) $(BONUSC)
	ar -rcs $(NAME) $(FILESO) $(BONUSO)