/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:59:12 by bgomes-l          #+#    #+#             */
/*   Updated: 2023/06/11 21:26:01 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_atoi(char *ptrb)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = 0;
	while (ptrb[i] != '\0')
	{
		if ((ptrb[i] >= '0') && (ptrb[i] <= '9'))
			c = c * 10 + (unsigned char)ptrb[i] - '0';
		else
			return (c);
		i++;
	}
	return (c);
}
