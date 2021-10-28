/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:58:35 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/28 14:01:49 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

/*
**	level: == 1 free(s1), == 2 free(s2), == 3 free(s1 and s2)
*/

char	*ft_strjoin(char const *s1, char const *s2, int level)
{
	size_t	length;
	int	i;
	int	j;
	char	*new;

	length = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(sizeof(char) * (length + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
		new[i] = s1[i], i++;
	j = 0;
	while (s2 && s2[j])
		new[i] = s2[j], i++, j++;
	new[i] = 0;
	if (s1 && (level == 1 || level == 3))
		free ((char *)s1), s1 = NULL;
	if (s2 && (level == 2 || level == 3))
		free ((char *)s2), s2 = NULL;
	return (new);
}