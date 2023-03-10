# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faxiro <faxiro@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 17:50:15 by tleroy            #+#    #+#              #
#    Updated: 2022/12/24 17:55:45 by faxiro           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

################################################
############	   VARIABLES		############
################################################

SRC      =	ft_isalpha.c	ft_isdigit.c 	ft_isalnum.c	ft_isascii.c		\
			ft_isprint.c	ft_strlen.c		ft_memset.c		ft_bzero.c			\
			ft_memcpy.c		ft_memmove.c	ft_strlcpy.c	ft_strlcat.c		\
			ft_toupper.c	ft_tolower.c	ft_strchr.c		ft_strrchr.c		\
			ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_atoi.c			\
			ft_calloc.c		ft_strdup.c		ft_substr.c		ft_strjoin.c		\
			ft_strtrim.c	ft_split.c		ft_itoa.c		ft_strmapi.c		\
			ft_striteri.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c		\
			ft_putnbr_fd.c	ft_strnstr.c

B_SRC    =	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	\
			ft_lstmap.c		ft_lstadd_back.c	ft_lstdelone.c	ft_lstclear.c	\
			ft_lstiter.c

OBJ		=	$(SRC:.c=.o)

B_OBJ	=	$(B_SRC:.c=.o)

NAME	=	libft.a

CC		:=	gcc

HEAD	=	libft.h

CFLAGS	:=	-Wall -Werror -Wextra

rm		:=	rm -rf

################################################
############	     RULES			############
################################################

all:		$(NAME)

%.o:		%.c $(HEAD) Makefile
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ) $(LIB)
				ar rcs $@ $(OBJ)
				ranlib $@

bonus:		$(NAME) $(OBJ) $(B_OBJ)
				ar rcs $(NAME) $(OBJ) $(B_OBJ)
				ranlib $(NAME)

################################################
############	MANDATORY RULES		############
################################################

clean:
			$(RM) $(OBJ) $(B_OBJ)

fclean:
			$(MAKE) clean
			$(RM) $(NAME)

re:
			$(MAKE) fclean
			$(MAKE) all

.PHONY: all clean fclean re

.SILENT: clean fclean
