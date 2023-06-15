/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:28:20 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/14 18:52:30 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < n) && !j)
	{
		j = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if ((i < n) && s1[i] != s2[i] && !j)
		j = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (j);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "ABC";
// 	char str2[] = "ABD";
// 	int result;
// 	int limit;

// 	limit = 2;
// 	result = ft_strncmp(str1, str2, limit);
// 	printf("Esse é o valor ft_strcmp:%d\n", ft_strncmp(str1, str2, limit));
// 	printf("Esse é o valor ft_strcmp:%d\n", ft_strncmp(str1, str2, 3));
// }