/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:33 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/13 15:06:28 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/minishell.h"

int is_string_empty(char *str)
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

int main(int argc, char **argv, char **env)
{
	char *str;
	
	(void)argv;
	(void)env;
	if (argc != 1)
		return (0);
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
