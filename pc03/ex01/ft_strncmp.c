/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:28:20 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/08 13:28:11 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < n))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char a[] = "Bergsone";
// 	char b[] = "Bergson";
// 	char *s1;
// 	char *s2;
// 	unsigned int n;

// 	s1 = a;
// 	s2 = b;
// 	n = 54545545;
// 	printf("Esse é o valor da função original:%d\n", ft_strncmp(s1, s2, n));
// 	ft_strncmp(s1, s2, n);
// 	printf("Esse é o valor da função ft_strncmp:%d\n", ft_strncmp(s1, s2, n));
// }