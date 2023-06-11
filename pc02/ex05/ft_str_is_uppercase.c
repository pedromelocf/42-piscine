/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:59:41 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/06 15:02:39 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char a[] = "PEDRO";
// 	char *str;

// 	str = a;
// 	ft_str_is_uppercase(str);
// 	printf("%d", ft_str_is_uppercase(str));
// }