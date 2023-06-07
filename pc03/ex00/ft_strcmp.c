/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:07:28 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/06 21:36:14 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	printf("%d\n\n", strcmp(s1,s2));
}

int	main(void)
{
	char a[] = "Bergsona";
	char b[] = "Bergson";
	char *s1;
	char *s2;

	s1 = a;
	s2 = b;
	ft_strcmp(s1, s2);
}