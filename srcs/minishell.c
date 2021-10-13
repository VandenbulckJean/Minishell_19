/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanachaineux <lanachaineux@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:33 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/13 14:54:58 by lanachaineu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/minishell.h"

int main(int ac, char **av, char **env)
{
	t_data data;
	
	if (ac != 1)
		return (0);
	rl_outstream = stderr;
	init_data(&data, env, NULL, av);
}
