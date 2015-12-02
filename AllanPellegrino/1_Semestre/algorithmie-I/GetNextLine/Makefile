# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 13:47:04 by apellegr          #+#    #+#              #
#    Updated: 2015/11/27 13:47:04 by apellegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	GetNextLine

NAMEBASE	=	$(shell basename $(NAME))

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

SRCDIR		=	srcs/

OBJDIR		=	objs/

INCDIR		=	includes/

LIBFT_DIR	=	libft/

LIBFT_LIB	=	libft/libft.a

SRCBASE		=	\
				get_next_line.c

INCBASE		=	\
				libft.h														\
				get_next_line.h

SRCS		=	$(addprefix $(SRCDIR), $(SRCBASE))

INCS		=	$(addprefix $(INCDIR), $(INCBASE))

OBJS		=	$(addprefix $(OBJDIR), $(SRCBASE:.c=.o))

.SILENT:

all:		$(NAME)

$(NAME):	$(OBJS)
	gcc $(FLAGS) -o $(NAME) $(OBJS) -L ./libft/ -lft

$(OBJS):	$(OBJDIR) $(SRCS)
	cd $(OBJDIR);															\
	gcc $(FLAGS) -c $(addpefix $(OBJDIR), $(OBJS))							\
	-I ../libft/ \
	-I ../libft/includes \
	-I $(addprefix ../, $(SRC))

clean:
	make -C ./libft/ clean
	rm -Rf $(OBJDIR)

fclean:		clean
	make -C ./libft/ fclean
	rm -f $(NAME)

re:			fclean all

.PHONY:		fclean clean re
