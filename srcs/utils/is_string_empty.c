/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_string_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:48:52 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/28 14:49:24 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int is_string_empty(char *str)
{
	if (!ft_strcmp(str, ""))
	{
		if (str)
		{
			free(str);
			str = NULL;
		}
		return (1);
	}
	return (0);
}