/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:49:12 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/05/31 19:38:12 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_commas_spaces(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_write_numbers(char x, char y)
{
	ft_putchar((x / 10) + '0');
	ft_putchar((x % 10) + '0');
	ft_putchar(' ');
	ft_putchar((y / 10) + '0');
	ft_putchar((y % 10) + '0');
}

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_write_numbers(x, y);
			if (!(x == 98 && y == 99))
				ft_write_commas_spaces();
			y++;
		}
		x++;
	}
}

/*int main (void)
{
	ft_print_comb2();
}*/