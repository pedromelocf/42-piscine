/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:11:35 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/14 12:49:56 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *ptrb)
{
	int	i;
	int	c;
	int	sign;

	c = 0;
	i = 0;
	sign = 1;
	while (ptrb[i] == ' ' || (ptrb[i] >= '\b' && ptrb[i] <= '\r'))
		i++;
	while (ptrb[i] == '-' || ptrb[i] == '+')
	{
		if (ptrb[i] == '-')
			sign *= -1;
		i++;
	}
	while (ptrb[i] >= '0' && ptrb[i] <= '9')
	{
		c = c * 10 + ptrb[i] - '0';
		i++;
	}
	return (c * sign);
}

// int	main(void)
// {
// 	char b[] = " ---+--+1234ab567";
// 	char *ptrb;

// 	ptrb = b;

// 	int val = ft_atoi(ptrb);
// 	printf("Meu atoi: %d", val);
// }