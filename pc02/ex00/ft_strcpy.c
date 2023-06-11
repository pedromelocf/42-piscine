/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:20:20 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/07 14:48:09 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char a[] = "Hey";
// 	char b[] = "Hello!";
// 	char *dest;
// 	char *src;

// 	dest = b;
// 	src = a;

// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// }
