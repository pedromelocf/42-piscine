/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:36:31 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/04 20:51:16 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		ft_putchar('\n');
		index++;
	}
	return ;
}

void	argv_to_position(char *argv1)
{
	int		index;
	char	position[15];

	index = 0;
	while (index < 16)
	{
		if (argv1[1] == ' ')
		{
			position[index] = argv1[1];
			index++;
		}
	}
	position[index] += '\0';
	ft_putstr(position);
}

int	main(int argc, char **argv[1])
{
	ft_putstr(argv[1]);
	argv_to_position(argv);
	return (0);
}
