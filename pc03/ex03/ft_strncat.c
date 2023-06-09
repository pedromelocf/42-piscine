/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:53:38 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/14 18:53:19 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while ((src[j]) && (j < nb))
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main (void)
// {
// 	char a[] = "12345";
// 	char b[] = "678910111213";
// 	int limit;

// 	limit = 1;
// 	printf("%s", ft_strncat(a, b, limit));
// 	return (0);
// }
