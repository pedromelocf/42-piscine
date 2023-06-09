/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:36:31 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/04 20:18:01 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*ptr_str;

	ptr_str = str;
	while (*ptr_str != '\0')
	{
		write(1, ptr_str, 1);
		ptr_str++;
	}
}

/* int	main(void)
{
	char	*str;

	str = "Hello";
	ft_putstr(str);
	return (0);
} */
