/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanachaineux <lanachaineux@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:54:44 by lanachaineu       #+#    #+#             */
/*   Updated: 2021/10/27 15:38:59 by lanachaineu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


int	parse(t_data *data, char *str, int i)
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


}
