/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:54:44 by lanachaineu       #+#    #+#             */
/*   Updated: 2021/10/28 15:04:31 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"
/*
int parse(t_data *data, char *str, int i)
{
	data->total_commands = 0;
	data->count = 0;
	data->env = NULL;
	while (str[i] && data->fl)
	{
		if (is_char_operator(str[i], "><|&;"))
		{
			
		}


	}
}*/

static void setup_basic_env(t_data *data, char **av)
{
	t_env *start;
	char *working_dir;

	start = new_env(ft_strdup("SHLVL"), ft_strdup("1"), 1);
	start->next = new_env(ft_strdup("_"), ft_strdup(av[0]), 1);
	working_dir = getcwd(NULL, PWD_LEN);
	start->next->next = new_env(ft_strdup("PWD"), working_dir, 1);
	data->env = start;
}

static t_env *parse_env(t_data *data, int i)
{
	size_t length;
	char *value;
	t_env *new;

	length = ft_strlen_c(data->string_env[i], '=');
	value = ft_strdup(&data->string_env[i][length + 1]);
	new = new_env(ft_strndup(data->string_env[i], length), value, 0);
	return (new);
}

void parse_envs(t_data *data, char **av)
{
	int i;
	t_env *new;
	t_env *temp;

	i = 0;
	if (!data->string_env)
		setup_basic_env(data, av);
	while (data->string_env && data->string_env[i])
	{
		new = parse_env(data, i);
		if (!data->env)
		{
			data->env = new;
			data->env->prev = NULL;
			temp = data->env;
			continue;
		}
		temp->next = new;
		new->prev = temp;
		temp = temp->next;
		i++;
	}
	data->count = 0;
}
