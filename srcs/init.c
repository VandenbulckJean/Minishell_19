/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:49:07 by lanachaineu       #+#    #+#             */
/*   Updated: 2021/10/28 17:11:14 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static void set_data_to_null(t_data *data)
{
	(void)data;
	//data->error = 0;
	//data->fd_in = -1;
	//data->fd_out = -1;
	//data->return_value = 0;
	//data->total_commands = 0;
	//data->old_stat = 0;
	//data->fl = 0;
	//data->all_pid = NULL;
	//data->fd_pipes = NULL;
	//data->tmp = NULL;
	//data->rez = NULL;
}

void init_data(t_data *data, char **env, char **av)
{
	t_env *temp;

	temp = NULL;
	set_data_to_null(data);
	data->string_env = env;
	parse_envs(data, av);
	temp = data->env;
	while (temp)
	{
		if (!ft_strcmp(temp->key, "SHLVL"))
		{
			data->shlvl = ft_atoi(temp->value) + 1;
			free(temp->value);
			if (data->shlvl < 0)
				data->shlvl = 0;
			temp->value = ft_itoa(data->shlvl);
		}
		if (!ft_strcmp(temp->key, "OLDPWD"))
		{
			free(temp->value);
			temp->value = NULL;
		}
		if (!ft_strcmp(temp->key, "PWD"))
			working_directory(data, 1);
		temp = temp->next;
	}
}
