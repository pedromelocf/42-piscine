/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:19:09 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/05/31 19:39:03 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	x;
	int	y;

	if (nb < 0)
		ft_putchar('-');
	while (nb >= 100)
	{
		y = ((nb / 10) + '0');
		x = ((nb % 10) + '0');
		nb = (nb / 10);
		y++;
		x++;
	}
	if (nb >= 0 && nb < 100)
	{
		y = ((nb / 10) + '0');
		x = ((nb % 10) + '0');
		ft_putchar(y);
		ft_putchar(x);
	}
}

int	main(void)
{
	ft_putnbr(100);
}
