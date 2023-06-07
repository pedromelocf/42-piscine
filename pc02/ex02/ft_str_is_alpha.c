/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:34:36 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/07 14:50:53 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char a[] = "OPa";
// 	char *str;

// 	str = a;
// 	ft_str_is_alpha(str);
// 	printf("%d", ft_str_is_alpha(str));
// }