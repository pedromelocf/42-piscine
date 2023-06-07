/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:35:47 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/05 11:04:03 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/* int	main(void)
{
	int	a;
	int	b;
	int	store_a;
	int	store_b;
	int	*div;
	int	*mod;

	a = 42;
	b = 10;
	store_a = 99;
	store_b = 21;
	div = &store_a;
	mod = &store_b;
	printf("%d\n", store_a);
	printf("%d\n", store_b);
	ft_div_mod(a, b, div, mod);
	printf("%d\n", store_a);
	printf("%d\n", store_b);
} */
