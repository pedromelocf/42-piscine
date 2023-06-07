/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:48:08 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/05/28 22:23:36 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_column(int x, char first_char, char mid_char, char last_char)
{
	int	column;

	column = 1;
	while (column <= x)
	{
		if (column == 1)
			ft_putchar(first_char);
		else if (x == column)
			ft_putchar(last_char);
		else
			ft_putchar(mid_char);
		column++;
	}
}

void	write_line(int y, int x, int line)
{
	if (line == 1)
		write_column(x, '/', '*', '\\');
	else if (line == y)
		write_column(x, '\\', '*', '/');
	else
		write_column(x, '*', ' ', '*');
}
