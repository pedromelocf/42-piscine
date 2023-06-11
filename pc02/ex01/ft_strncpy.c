/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:10:53 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/10 21:14:20 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char a[] = "Hey";
// 	char b[] = "Hello!";
// 	char *dest;
// 	char *src;

// 	unsigned int n;
// 	dest = b;
// 	src = a;
// 	n = 2;

// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// 	ft_strncpy(dest, src, n);
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// }