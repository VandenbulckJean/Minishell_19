/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaineu <lchaineu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:12:40 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/28 14:07:47 by lchaineu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static void write_error_nl(char *error_message)
{
	ft_putstr_fd(error_message, 2);
	ft_putchar_fd('\n', 2);
}

int error_manager(int error_type, int error_code, char *error_message, char current_c)
{
	if (!error_type)
	{
		write_error_nl(error_message);
		exit(error_code);
	}
	
}