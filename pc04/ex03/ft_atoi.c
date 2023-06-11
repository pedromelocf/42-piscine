/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:11:35 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/10 15:11:37 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *ptrb)
{
	int	i;
	int	c;
	int	sign;

	c = 0;
	i = 0;
	sign = 1;
	if (ptrb[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (ptrb[i] != '\0')
	{
		if ((ptrb[i] >= '0') && (ptrb[i] <= '9'))
			c = c * 10 + ptrb[i] - '0';
		else
			return sign * c;
		i++;
	}
	return sign * c;
}

int	main(void)
{
	char b[] = "2147483647";
	char *ptrb;

	ptrb = b;

	printf("Atoi original: %d\n", atoi(ptrb));
	int val = ft_atoi(ptrb);
	printf("Meu atoi: %d", val);
}