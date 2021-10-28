/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:43:01 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/28 15:22:38 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static void ctrl_c_handler(int sig)
{
	(void)sig;
	write(2, "\n", 1);
	rl_replace_line("", 0);
	rl_on_new_line();
	rl_redisplay();
	g_stat = 1;
}

void main_signals(void)
{
	signal(SIGTERM, SIG_IGN);
	signal(SIGINT, ctrl_c_handler);
	signal(SIGQUIT, SIG_IGN);
}