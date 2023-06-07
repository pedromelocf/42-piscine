/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:54:41 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/07 17:57:21 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 1;
	while (str[i - 1] != 0)
	{
		c = 0;
		while ((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A'
				&& str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i
					- 1] <= '9'))
		{
			if ((c == 0) && str[i - 1] >= 'a' && str[i - 1] <= 'z')
			{
				str[i - 1] -= 32;
				c += 1;
			}
			else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				str[i - 1] += 32;
			else if (str[i - 1] >= '0' && str[i - 1] <= '9')
				c += 1;
			i++;
		}
		i++;
	}
	i++;
	return (str);
}

int	main(void)
{
	char a[] = "sAlut, cOmment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *str;

	str = a;
	ft_strcapitalize(str);
	printf("%s", str);
}