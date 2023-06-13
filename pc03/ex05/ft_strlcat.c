/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:22:12 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/13 01:00:39 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_lenght;
	unsigned int	lenght;

	src_lenght = 0;
	lenght = 0;
	while (src[src_lenght] != '\0')
		src_lenght++;
	while (src[lenght] != '\0' && lenght < (size + src_lenght - 1)
		&& (size > 0))
	{
		dest[lenght + src_lenght] = src[lenght];
		lenght++;
	}
	if (size == 0)
		return (src_lenght);
	dest[lenght + src_lenght] = '\0';
	return (lenght + src_lenght - 1);
}

// int	main(void)
// {
// 	char dest[20] = "Hello";
//     char src[10] = " World";
//     char dest2[20] = "Hello";
//     char src2[10] = " World";
//     unsigned int size = 8;
//     printf("String original: %s\n", dest);
//     printf("String a ser concatenada: %s\n", src);
//     unsigned int result = ft_strlcat(dest, src, size);
//     printf("String resultante: %s\n", dest);
//     printf("Meu comprimento total: %u\n", result);
//     unsigned int result2 = strlcat(dest2, src2, size);
//     printf("Original comprimento total: %u\n", result2);
//     return (0);
// }