/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:31:21 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/08 16:53:11 by pmelo-ca         ###   ########.fr       */
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
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char a[16] = "Ab";
// 	char b[16] = "AC";
// 	char *dest;
// 	char *src;

// 	dest = a;
// 	src = b;
// 	printf("O resultado deveria ser: %s\n", strcat(dest, src));
// 	ft_strcat(dest, src);
// 	printf("O resultado foi: %s\n", ft_strcat(dest, src));
// }