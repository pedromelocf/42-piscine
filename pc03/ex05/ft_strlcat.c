/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:22:12 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/14 21:55:14 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_lenght;
	unsigned int	dest_lenght;
	unsigned int	i;

	src_lenght = 0;
	dest_lenght = 0;
	i = 0;
	while (src[dest_lenght] != '\0')
		dest_lenght++;
	while (src[src_lenght] != '\0')
		src_lenght++;
	while (src[i] != '\0' && dest_lenght + 1 < size)
	{
		dest[dest_lenght + i - 1] = src[i];
		i++;
	}
	dest[dest_lenght + i] = '\0';
	if (size < dest_lenght)
		return (src_lenght + size);
	else
		return (dest_lenght + src_lenght);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[] = "1234";
// 	char src[] = "56789";
// 	int limit;

// 	limit = 5;
// 	printf("%d", ft_strlcat(dest, src, limit));
// }
