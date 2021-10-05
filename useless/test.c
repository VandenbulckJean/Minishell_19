/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <jvanden-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:34:34 by jvanden-          #+#    #+#             */
/*   Updated: 2021/10/05 13:37:29 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

int main (int argc, char **argv)
{
	int i = 0;

	if (argc == 1)
		printf("no argv\n");
	else
	{
		while(argc-- > 1)
		{
			printf("%s\n", argv[argc]);
		}
	}
	return (0);
}