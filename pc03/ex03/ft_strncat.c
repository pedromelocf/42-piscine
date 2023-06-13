/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:53:38 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/13 01:41:30 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && (j < nb))
	{
		dest[j + i] = src[j];
		j++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char a[20] = "HELLO ";
// 	char b[10] = "WORLD";
// 	char *dest;
// 	char *src;
// 	unsigned int nb;

// 	dest = a;
// 	src = b;
// 	nb = 0;
// 	printf("O resultado foi %s\n", strncat(dest, src, nb));
// 	// printf("O resultado foi %s\n", ft_strncat(dest, src, nb));
// }