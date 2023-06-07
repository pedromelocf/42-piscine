/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:55:23 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/05/28 22:24:03 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_error_message(char a);
void	write_line(int y, int x, int line);

int	rush(int x, int y, char a)
{
	int	line;

	if (x <= 0 || y <= 0)
		return (1);
	line = 1;
	while (line <= y)
	{
		write_line(y, x, line);
		write(1, "\n ", 1);
		line++;
	}
}
