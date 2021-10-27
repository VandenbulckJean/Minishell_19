/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:02:55 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/27 16:27:17 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>

# define PWD_LEN	1024

# define ERR_MALOC	"Error : malloc error"


typedef struct s_env
{
	//int				print;
	char			*key;
	char			*value;
	unsigned char	visibility;
	struct s_env	*prev;
	struct s_env	*next;

}	t_env;	


typedef struct	s_data
{
	//unsigned char	return_value;
	//unsigned char	error;
	//int	fl;
	//int	count;
	//int	fd_in;
	//int	fd_out;
	//int	total_commands;
	//int	**fd_pipes;
	//int	shlvl;
	//int	old_stat;
	//int	*all_pid;
	//char	*tmp;
	char	**string_env;
	//char	*rez;
	t_env	*env;
	//t_cmd	*cmd_start;
}	t_data;

//INIT
void	init_data(t_data *data, char **env, char **av);

//UTILS
size_t	ft_strlen(const char *str);
char 	*ft_strdup(const char *str);
int 	ft_strcmp(const char *s1, const char *s2);
void	ft_putstr_fd(char *str, int fd);
void 	ft_putchar_fd(char c, int fd);

//ERROR
int 	error_manager(int error_type, int error_code, char *error_message);

#endif 