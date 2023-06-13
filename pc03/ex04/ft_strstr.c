/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:41:11 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/13 00:57:10 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	a[] = "Today was a good day!4434";
// 	char	b[] = "good day!";
// 	char	*str;
// 	char	*to_find;

// 	str = a;
// 	to_find = b;
// 	ft_strstr(str, to_find);
// 	printf("Original output(função original): %s\n", strstr(str, to_find));
// 	printf("My function ouput(função criada): %s\n", ft_strstr(str, to_find));
// }
