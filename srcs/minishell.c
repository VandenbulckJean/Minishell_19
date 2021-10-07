/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:33 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/07 16:22:54 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/minishell.h"

char	*read_from_stdin(void)
{
	char *return_value;

	return_value = readline("minishell$ ");
	return (return_value);
}

int main(int argc, char **argv)
{
	char *line;

	if (argc > 1)
	{
		execve(argv[1], NULL, NULL);
	}
	else
	{
		line = read_from_stdin();
	}
	return (1);
}
