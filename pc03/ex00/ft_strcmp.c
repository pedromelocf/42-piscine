/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:07:28 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/12 10:19:21 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char a[] = "Bergsone";
// 	char b[] = "Bergsone";
// 	char *s1;
// 	char *s2;

// 	s1 = a;
// 	s2 = b;
// 	printf("Esse é o valor da função original:%d\n", strcmp(s1, s2));
// 	ft_strcmp(s1, s2);
// 	printf("Esse é o valor da função ft_strcmp:%d\n", ft_strcmp(s1, s2));
// }