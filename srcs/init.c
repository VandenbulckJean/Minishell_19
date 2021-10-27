/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanachaineux <lanachaineux@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:49:07 by lanachaineu       #+#    #+#             */
/*   Updated: 2021/10/27 16:40:32 by lanachaineu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static void	set_data_to_null(t_data *data)
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

t_env	*new_env(char *key, char *value, unsigned char visibility)
{
	t_env *new;

	new = malloc(sizeof(t_env));
	if (!new)
		error_manager(0, -1, ERR_MALOC);
	new->key = key;
	new->value = value;
	//new->print = 0;
	new->visibility = visibility;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

static void	setup_basic_env(t_data *data, char **av)
{
	t_env	*start;
	char	*working_dir;

	start = new_env(ft_strdup("SHLVL"), ft_strdup("1"), 1);
	start->next = new_env(ft_strdup("_"), ft_strdup(av[0]), 1);
	working_dir = getcwd(NULL, PWD_LEN);
	start->next->next = new_env(ft_strdup("PWD"), working_dir, 1);
	data->env = start;
}

static void	parse_env(t_data* data, char **av)
{
	if (!data->string_env)
		setup_basic_env(data, av);
}

void	init_data(t_data *data, char **env, char **av)
{
	t_env *tmp;

	tmp = NULL;
	set_data_to_null(data);
	data->string_env = env;
	


}
