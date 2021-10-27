/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:33 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/27 13:02:31 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/minishell.h"

static int is_string_empty(char *str)
{
	if (!ft_strcmp(str, ""))
	{
		if (str)
		{
			free(str);
			str = NULL;
		}
		return (1);
	}
	return (0);
}

int main(int ac, char **av, char **env)
{
	char *str;
	t_data data;
	
	if (ac != 1)
		return (0);
	rl_outstream = stderr;
	init_data(&data, env, av);
	while(1)
	{
		str = readline("minishell$ ");
		if (!str)
			ft_strdup("exit");
		if (is_string_empty(str))
			continue;
		add_history(str);
	}
}
