/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:53:43 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/28 14:54:04 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

t_env *new_env(char *key, char *value, unsigned char visibility)
{
	t_env *new;

	new = malloc(sizeof(t_env));
	if (!new)
		error_manager(0, -1, ERR_MALOC, 0);
	new->key = key;
	new->value = value;
	//new->print = 0;
	new->visibility = visibility;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}