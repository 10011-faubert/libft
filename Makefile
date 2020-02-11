# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faubert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/02 16:12:39 by faubert           #+#    #+#              #
#    Updated: 2020/02/06 11:11:26 by faubert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c				\
			ft_bzero.c				\
			ft_calloc.c 			\
			ft_isalnum.c 			\
			ft_isalpha.c			\
			ft_isascii.c 			\
			ft_isdigit.c			\
			ft_isprint.c			\
			ft_itoa.c				\
			ft_memccpy.c 			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_memcpy.c				\
			ft_memmove.c			\
			ft_memset.c				\
			ft_putchar_fd.c			\
			ft_putendl_fd.c			\
			ft_putnbr_fd.c			\
			ft_putstr_fd.c			\
			ft_split.c				\
			ft_strchr.c				\
			ft_strdup.c				\
			ft_strjoin.c			\
			ft_strlcat.c			\
			ft_strlcpy.c			\
			ft_strlen.c				\
			ft_strmapi.c			\
			ft_strncmp.c			\
			ft_strnstr.c			\
			ft_strrchr.c			\
			ft_strtrim.c			\
			ft_substr.c				\
			ft_tolower.c			\
			ft_toupper.c			\

BONUS	=	ft_lstnew.c				\
			ft_lstadd_front.c		\
			ft_lstsize.c			\
			ft_lstlast.c			\
			ft_lstadd_back.c		\
			ft_lstdelone.c			\
			ft_lstclear.c			\
			ft_lstiter.c			\
			ft_lstmap.c				\

FILES		= $(SRCS:.c=.o)

FILES_BONUS	= $(SRCS:.c=.o) $(BONUS:.c=.o)

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(FILES)
				ar rc $(NAME) ${FILES}

all:		$(NAME)

bonus:		$(FILES_BONUS)
				ar rc $(NAME) $(FILES_BONUS)

clean:
				${RM} $(FILES) $(FILES_BONUS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re

