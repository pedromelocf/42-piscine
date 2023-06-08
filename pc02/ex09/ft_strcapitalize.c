/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:54:41 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/07 18:13:48 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != 0)
	{
		c = 0;
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if ((c == 0) && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				c += 1;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			else if (str[i] >= '0' && str[i] <= '9')
				c += 1;
			i++;
		}
		i++;
	}
	i++;
	return (str);
}

// int	main(void)
// {
// 	char a[] = "sAlut, cOmment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	char *str;

// 	str = a;
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// }