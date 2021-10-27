/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanachaineux <lanachaineux@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:40:09 by lanachaineu       #+#    #+#             */
/*   Updated: 2021/10/27 16:36:24 by lanachaineu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static int	handle_angle_brackets(t_data *data, char *str, int *i)
{
	if (is_char_operator(str[*i + 2], ";><"))
	{
		error_manager();
		data->return_value = 2;
		return (-1);
	}
	else if (is_char_operator(str[*i + 2], "\n\0"))
	{
		data->return_value = 2;
		return (-2);
	}
	else if (str[*i] == '>' && str[*i + 1] == '>')
	{
		*i = *i + 2;
		return (ft_open(data, str, i, 1));
	}
	else if (str[*i] == '<' && str[*i + 1] == '<')
		//?
	


}

int		handle_op(t_data *data, char *str, int *i, int act)
{
	if ((str[*i] == '<' || str[*i] == '>') 
		&& (str[*i + 1] == '<' || str[*i + 1] == '>'))
	{
		act = handle_angle_brackets(data, str, i);
		
	}



}