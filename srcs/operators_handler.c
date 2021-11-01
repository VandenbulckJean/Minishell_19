/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaineu <lchaineu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:40:09 by lchaineu          #+#    #+#             */
/*   Updated: 2021/11/01 15:07:21 by lchaineu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static int	ft_open(t_data *data, char *str, int *i, int level)
{
	int previous_i;
	char *file_name;

	file_name = NULL;
	if ((level == 1 || level == 2) && data->fd_out >= 0)
	{
		close(data->fd_out);
		data->fd_out = -1;
	}
	else if (level == 3 && data->fd_in)
		close(data->fd_in);
	if (str[*i] && (str[*i] == '|' || str[*i] == '&'))
		*i = *i + 1;
	while (str[*i] && is_char_operator(str[*i], " \t"))
		*i = *i + 1;
	previous_i = *i;
	while (str[*i] && !is_char_operator(str[*i], "> <|&;"))
		file_name = 
	
		

	
}

static int	handle_multiple_angle_brackets(t_data *data, char *str, int *i)
{
	/f (is_char_operator(str[*i + 2], ";><"))
	{
		error_manager(1, 0,ERR_SYN_TKN, str[*i + 2]);
		data->return_value = 2;
		return (-1);
	}
	else if (is_char_operator(str[*i + 2], "\n\0"))
	{
		error_manager(2, 0, ERR_SYN_TKN_NL, 0);
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

static int	handle_angle_brackets(t_data *data, char *str, int *i)
{
	if (is_char_operator(str[*i + 1], ';'))
	{
		error_manager(1, 0, ERR_SYN_TKN, str[*i + 2]);
		data->return_value = 2;
		return (-1);
	}
	if (is_char_operator(str[*i + 1], "\0\n"))
	{
		error_manager(1, 0, ERR_SYN_TKN_NL, str[*i + 2]);
		data->return_value = 2;
		return (-2);
	}
	else if (str[*i] == '>')
	{
		*i = *i + 1;
		return (ft_open(data, str, i, 2));
	}
	*i = *i + 1;
	return (ft_open(data, str, i, 3));
}

int handle_op(t_data *data, char *str, int *i, int act)
{
	
	if ((str[*i] == '<' || str[*i] == '>') 
		&& (str[*i + 1] == '<' || str[*i + 1] == '>'))
	{
		act = handle_multiple_angle_brackets(data, str, i);
		
	}
	else if ((str[*i] == ">" || str[*i] == "<"))
	{
		act = handle_angle_brackets(data, str, i);
	}


}
