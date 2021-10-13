/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanachaineux <lanachaineux@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:33 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/13 15:34:04 by lanachaineu      ###   ########.fr       */
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
	init_data(&data, env, NULL, av);
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
