/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:31:21 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/13 01:03:25 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char a[] = "HELLO, ";
// 	char b[] = "WORLD";
// 	char *dest;
// 	char *src;

// 	dest = a;
// 	src = b;
// 	// printf("O resultado deveria ser: %s\n", strcat(dest, src));
// 	// ft_strcat(dest, src);
// 	printf("O resultado foi: %s\n", ft_strcat(dest, src));
// }