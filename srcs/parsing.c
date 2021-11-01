/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaineu <lchaineu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:54:44 by lchaineu           #+#    #+#             */
/*   Updated: 2021/10/28 14:08:03 by lchaineu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


int	parse(t_data *data, char *str, int i)
{
	data->total_commands = 0;
	data->count = 0;
	//data->env = NULL;
	while (str[i] && data->fl)
	{
		if (is_char_operator(str[i], "><|&;"))
		{
			
		}


	}


}
