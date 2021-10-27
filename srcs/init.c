/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanachaineux <lanachaineux@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:49:07 by lanachaineu       #+#    #+#             */
/*   Updated: 2021/10/27 16:38:32 by lanachaineu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static char	set_data_to_null(t_data *data)
{
	data->fl = 0;
	data->return_value = NULL;
	data->error = NULL;
	data->total_commands = 0;
}

static void get_env_variables(t_data *data, int i, size_t len, char ** av)
{
	t_env a;
	t_env b;
	char *variable_val;

	if (!data->env)
		env_to_null(data, av);


}

void	init_data(t_data *data, char **env, t_env *env_temp, char **av)
{
	set_data_to_null(data);
	data->env = env;
	get_env_variables(data, 0, 0, av);


}
