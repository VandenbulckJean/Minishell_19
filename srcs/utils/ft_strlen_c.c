/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:56:21 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/27 16:57:35 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

size_t	ft_strlen_c(const char *str, char c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	if (!c)
	{
		while (str[i])
			i++;
	}
	else
	{
		while (str[i] && str[i] != c)
			i++;
		if (!str[i])
			i = 0;
	}
	return (i);
}