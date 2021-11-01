/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaineu <lchaineu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:33 by jvanden-          #+#    #+#             */
/*   Updated: 2021/11/01 15:07:39 by lchaineu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int g_stat;

int main(int ac, char **av, char **env)
{
	char *str;
	t_data data;

	if (ac != 1)
		return (0);
	rl_outstream = stderr;
	init_data(&data, env, av);
	main_signals();
	while (1)
	{
		str = readline("minishell$ ");
		if (!str)
			ft_strdup("exit");
		if (is_string_empty(str))
			continue;
		add_history(str);
		//if (!parse(&data, str, 0))
	}
}
