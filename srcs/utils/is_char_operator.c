/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanachaineux <lanachaineux@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:03:44 by lanachaineu       #+#    #+#             */
/*   Updated: 2021/10/27 15:39:04 by lanachaineu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	is_char_operator(char c, char *str)
{
	while(*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
