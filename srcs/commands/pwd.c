/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:54:05 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/28 14:33:22 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

static void print_working_directory(t_env *env, char *str)
{
	t_env *temp;

	temp = env;
	if (str && !str[0])
	{
		while (temp && ft_strcmp(temp->key, "PWD"))
			temp = temp->next;
		if (temp)
		{
			printf("%s\n", temp->value);
			free(str);
		}
	}
	else
	{
		printf("%s\n", str);
		free(str);
	}
}

void working_directory(t_data *data, int level)
{
	char *str;
	t_env *temp;

	str = ft_strjoin(NULL, getcwd(NULL, PWD_LEN), 2);
	if (!level)
	{
		print_working_directory(data->env, str);
		return;
	}
	temp = data->env;
	while (temp && ft_strcmp(temp->key, "PWD"))
		temp = temp->next;
	if (temp)
	{
		free(temp->value);
		temp->value = str;
	}
	else
		free(str);
	return;
}