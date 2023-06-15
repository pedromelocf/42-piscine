/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:40:58 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/14 22:13:53 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

int	main(int argc, char **argv)
{
	int		counter;
	char	*temp;

	argc = 0;
	temp = 0;
	while (argc)
	{
		counter = 0;
		while (argc < counter - 1)
		{
			if (argv[argc] > argv[counter])
			{
				temp = argv[argc];
				argv[argc] = argv[counter];
				argv[counter] = temp;
			}
			counter++;
			ft_putchar(argv[counter]);
		}
		argc++;
	}
}
