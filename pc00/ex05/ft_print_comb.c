/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:19:55 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/05/30 12:16:50 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_numbers(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	if (!(x == 55 && y == 56 && z == 57))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = 48;
	y = 49;
	z = 50;
	while (x <= 55)
	{
		y = x + 1;
		while (y <= 56)
		{
			z = y + 1;
			while (z <= 57)
			{
				ft_write_numbers(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

/* int	main(void)
{
	ft_print_comb();
} */