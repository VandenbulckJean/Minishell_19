/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:00:28 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/28 15:02:27 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

char *ft_strndup(const char *src, size_t n)
{
	char *new;
	size_t length;
	size_t i;

	if (!src)
		return (NULL);
	length = ft_strlen(src) + 1;
	if (length < n)
	{
		new = malloc(sizeof(char) * length);
		n = length;
	}
	else
		new = malloc(sizeof(char) * (n + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
		new[i] = src[i], i++;
	new[i] = 0;
	return (new);
}