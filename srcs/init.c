/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanachaineux <lanachaineux@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:49:07 by lanachaineu       #+#    #+#             */
/*   Updated: 2021/10/13 15:00:00 by lanachaineu      ###   ########.fr       */
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

static void	


void	init_data(t_data *data, char **env, t_env *env_temp, char **av)
{
	set_data_to_null(data);
	data->env = env;
	


}
