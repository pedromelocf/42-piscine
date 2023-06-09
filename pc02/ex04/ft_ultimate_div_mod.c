/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:36:08 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/04 23:06:52 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* int	main(void)
{
	int *a;
	int *b;
	int a_divider;
	int b_divider;
	
	a_divider = 42;
	b_divider = 10;
	a = &a_divider;
	b = &b_divider;

	printf("%d\n", a_divider);
	printf("%d\n", b_divider);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", a_divider);
	printf("%d\n", b_divider);
} */