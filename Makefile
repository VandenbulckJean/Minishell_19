# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 10:17:34 by jvanden-          #+#    #+#              #
#    Updated: 2021/10/13 14:26:09 by jvanden-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc

INCL		=	./includes/

HEADER		=	 -I $(INCL)

CFLAGS		=	-Wall -Wextra -Werror

FLAGS		=	-lreadline

NAME		=	minishell

### PATH ###

SRCS_PATH			=	srcs/

SRCS_MINISHELL	=	minishell.c \
					init.c
				
##SRCS_UTILS			=	

SRCS_MINISHELL2	=	$(addprefix $(SRCS_PATH), $(SRCS_MINISHELL)) \
						##$(addprefix $(SRCS_PATH)utils/, $(SRCS_UTILS))

OBJ_MINISHELL	=	$(SRCS_MINISHELL2:.c=.o)

######### RULES #######

all : $(NAME)

$(NAME) : $(OBJ_MINISHELL)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ_MINISHELL) $(CFLAGS) $(HEADER)

clean:
	@/bin/rm -rf $(OBJ_MINISHELL)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
	
.PHONY: all re clean fclean 