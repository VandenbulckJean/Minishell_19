/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:33 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/13 14:04:02 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/minishell.h"

int main(int argc, char **argv)
{
	if (argc != 1)
		return (0);
	rl_outstream = stderr;
}
