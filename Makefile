# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 10:17:34 by jvanden-          #+#    #+#              #
#    Updated: 2021/10/28 16:25:33 by jvanden-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc

INCL		=	./includes/

CFLAGS		=	-Wall -Wextra -Werror

LDFLAGS     =    -L/usr/local/opt/readline/lib

CPPFLAGS	=	-I/usr/local/opt/readline/include

NAME		=	minishell

# COLORS

YELLOW	= \033[0;33m
PURPLE	= \033[0;35m
SHALLOW = \033[0m

### PATH ###

SRCS_PATH			=	srcs/

SRCS_MINISHELL	=	error.c \
					init.c \
					minishell.c \
					operators_handler.c \
					parsing.c \
					signals.c
				
SRCS_UTILS		=	ft_atoi.c \
					ft_itoa.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_strcmp.c \
					ft_strdup.c \
					ft_strjoin.c \
					ft_strlen_c.c \
					ft_strlen.c \
					ft_strndup.c \
					is_string_empty.c \
					new_env.c
					

SRCS_COMMANDS	=	pwd.c

SRCS_MINISHELL2	=	$(addprefix $(SRCS_PATH), $(SRCS_MINISHELL)) \
					$(addprefix $(SRCS_PATH)utils/, $(SRCS_UTILS)) \
					$(addprefix $(SRCS_PATH)commands/, $(SRCS_COMMANDS))

OBJ_MINISHELL	=	$(SRCS_MINISHELL2:.c=.o)

######### RULES #######

all : $(NAME)


%.o:%.c		
			@${CC} ${CFLAGS} ${CPPFLAGS} -c $< -o ${<:.c=.o}
			
$(NAME) : $(OBJ_MINISHELL)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(OBJ_MINISHELL) $(HEADER) -lreadline $(LDFLAGS)
	@echo "${YELLOW}${NAME} compiled successfully!${SHALLOW}"

clean:
	@/bin/rm -rf $(OBJ_MINISHELL)
	@echo "${PURPLE}${NAME} directory cleaned successfully.${SHALLOW}"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "${PURPLE}${NAME} executable deleted.${SHALLOW}"


re: fclean all

readline:	
			@brew install readline
	
.PHONY: all re clean fclean 