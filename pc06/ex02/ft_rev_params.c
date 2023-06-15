/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:40:55 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/14 22:13:40 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	counter;
	int	i;

	i = 1;
	while (argv[i])
		i++;
	while (argc > 1)
	{
		counter = 0;
		while (argv[i - 1][counter])
		{
			ft_putchar(argv[i - 1][counter]);
			counter++;
		}
		ft_putchar('\n');
		i--;
		argc--;
	}
	return (0);
}
