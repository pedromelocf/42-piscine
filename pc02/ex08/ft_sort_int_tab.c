/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:37:25 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/04 23:37:15 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	storage;
	int	j;

	index = 0;
	while (index < size - 1)
	{
		j = index + 1;
		while (j < size)
		{
			if (tab[index] > tab[j])
			{
				storage = tab[index];
				tab[index] = tab[j];
				tab[j] = storage;
			}
			j++;
		}
		index++;
	}
}

// int	main(void)
// {
// 	int	*tab;
// 	int	size;
// 	int	array[7];
// 	int	i;
// 	int	x;

// 	i = 0;
// 	array[0] = 42;
// 	array[1] = 3;
// 	array[2] = 4;
// 	array[3] = 6;
// 	array[4] = -23;
// 	array[5] = 5;
// 	array[6] = 45;
// 	tab = &array[0];
// 	size = 7;
// 	x = 7;
// 	ft_sort_int_tab(tab, size);
// 	printf("%i\n", array[0]);
// 	printf("%i\n", array[1]);
// 	printf("%i\n", array[2]);
// 	printf("%i\n", array[3]);
// 	printf("%i\n", array[4]);
// 	printf("%i\n", array[5]);
// 	printf("%i\n", array[6]);
// }
