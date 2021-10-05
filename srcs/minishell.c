/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:33 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/05 13:51:39 by jvanden-         ###   ########.fr       */
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
	if (argc > 1)
	{
		execve(argv[1], NULL, NULL);
	}
	
	return (1);
}
