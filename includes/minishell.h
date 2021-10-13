/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanachaineux <lanachaineux@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:02:55 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/13 15:34:23 by lanachaineu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>

typedef struct s_env
{
	//int				print;
	char			*key;
	//char			*val;
	//unsigned char	visible;
	//struct s_env	*prev;
	//struct s_env	*next;

}	t_env;	


typedef struct	s_data
{
	int	fl;
	int	count;
	unsigned char	return_value;
	unsigned char	error;
	//int	fd_in;
	//int	fd_out;
	int	total_commands;
	//int	**fd_pipes;
	int	shlvl;
	//int	old_stat;
	//int	*all_pid;
	//char	*tmp;
	char	**env;
	//char	*rez;
	t_env	*beg_env;
	//t_cmd	*cmd_start;
}	t_data;

//INIT
void	init_data(t_data *data, char **env, t_env *env_temp, char **av);

//UTILS
size_t	ft_strlen(const char *str);
char 	*ft_strdup(const char *str);
int 	ft_strcmp(const char *s1, const char *s2);

#endif 