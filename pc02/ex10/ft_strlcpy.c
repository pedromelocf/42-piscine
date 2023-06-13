/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:47:43 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/12 19:48:38 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_lenght;
	unsigned int	lenght;

	src_lenght = 0;
	lenght = 0;
	while (src[src_lenght] != 0 && size > 0)
		src_lenght++;
	if (size < 1)
		return (src_lenght);
	while (src[lenght] != '\0' && lenght < (size - 1))
	{
		dest[lenght] = src[lenght];
		lenght++;
	}
	dest[lenght] = '\0';
	return (lenght);
}

// int	main(void)
// {
// 	char			*dest;
// 	char			*src;
// 	char			a[] = "ABCEEWE";
// 	char			b[] = "PUTSgfgf";
// 	unsigned int	size;

// 	dest = a;
// 	src = b;
// 	size = 4;
// 	printf("%d", ft_strlcpy(dest, src, size));
// }
