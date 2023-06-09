/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:37:06 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/04 23:07:54 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	storage;

	index = 0;
	while (index < (size / 2))
	{
		storage = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = storage;
		index++;
	}
}

/* int	main(void)
{
	int	*tab;
	int	size;
	int	array[7];
	int	i;

	i = 0;
	array[0] = 42;
	array[1] = 3;
	array[2] = 4;
	array[3] = 6;
	array[4] = -23;
	array[5] = 5;
	array[6] = 45;
	array[7] = 65;
	tab = &array[0];
	size = 8;
	ft_rev_int_tab(tab, size);
	printf("%i\n", array[0]);
	printf("%i\n", array[1]);
	printf("%i\n", array[2]);
	printf("%i\n", array[3]);
	printf("%i\n", array[4]);
	printf("%i\n", array[5]);
	printf("%i\n", array[6]);
	printf("%i\n", array[7]);
} */
