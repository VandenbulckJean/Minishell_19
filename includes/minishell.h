/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:02:55 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/28 16:56:27 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include <dirent.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <curses.h>
#include <term.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <readline/history.h>
#include <readline/readline.h>

#define PWD_LEN 1024

#define ERR_MALOC "Error : malloc error"

extern int g_stat;

typedef struct s_env
{
	//int				print;
	char *key;
	char *value;
	unsigned char visibility;
	struct s_env *previous;
	struct s_env *next;

} t_env;

typedef struct s_data
{
	unsigned char return_value;
	//unsigned char	error;
	//int	fl;
	int count;
	//int	fd_in;
	//int	fd_out;
	int total_commands;
	//int	**fd_pipes;
	int shlvl;
	//int	old_stat;
	//int	*all_pid;
	//char	*tmp;
	char **string_env;
	//char	*rez;
	t_env *env;
	//t_cmd	*cmd_start;
} t_data;

//INIT
void init_data(t_data *data, char **env, char **av);

//PARSING
int parse(t_data *data, char *str, int i);
void parse_envs(t_data *data, char **av);

//OPERATORS HANDLER
int handle_op(t_data *data, char *str, int *i, int act);

//UTILS
size_t ft_strlen(const char *str);
char *ft_strdup(const char *str);
int ft_strcmp(const char *s1, const char *s2);
int is_char_operator(char c, char *str);
void ft_putstr_fd(char *str, int fd);
void ft_putchar_fd(char c, int fd);
size_t ft_strlen_c(const char *str, char c);
int ft_atoi(const char *str);
char *ft_itoa(int n);
char *ft_strjoin(char const *s1, char const *s2, int level);
int is_string_empty(char *str);
t_env *new_env(char *key, char *value, unsigned char visibility);
char *ft_strndup(const char *src, size_t n);

//ERROR
int error_manager(int error_type, int error_code, char *error_message, char current_c);

//COMANDS
void working_directory(t_data *data, int level);

//SIGNALS
void main_signals(void);

#endif