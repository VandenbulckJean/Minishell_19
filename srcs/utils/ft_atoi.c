/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:14:53 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/27 17:15:51 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_atoi(const char *str)
{
	int					neg;
	unsigned long long	res;

	neg = 1;
	res = 0;
	while (*str && (*str == 32 || (*str > 8 && *str < 14)))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9' && res <= 9223372036854775800)
		res = res * 10 + (*str - 48), str++;
	if (res > 9223372036854775807 && neg == 1)
		return (-1);
	else if (res > 9223372036854775807 && neg == -1)
		return (0);
	return ((int)res * neg);
}