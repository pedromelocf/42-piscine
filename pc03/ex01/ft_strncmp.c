/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:28:20 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/13 01:41:17 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char a[] = "Bergesone";
	char b[] = "Bergz";
	char *s1;
	char *s2;
	unsigned int n;

	s1 = a;
	s2 = b;
	n = 5;
	printf("Esse é o valor da função original:%d\n", strncmp(s1, s2, n));
	printf("Esse é o valor da função ft_strncmp:%d\n", ft_strncmp(s1, s2, n));
}