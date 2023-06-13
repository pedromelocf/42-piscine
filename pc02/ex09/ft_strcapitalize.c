/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:54:41 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/12 19:30:17 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] > 'a' && str[0] < 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A'
					&& str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i
						- 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char a[] = "42Salut, Comment tu vAs ? 42Mots {quarante-deux; ";
// 	char *str;

// 	str = a;
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// }