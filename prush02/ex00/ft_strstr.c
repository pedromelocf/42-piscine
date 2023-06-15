/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:19:04 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/13 02:06:58 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_the_same(char *str, char *to_find)
{
	while (*str != '\0' && *to_find != '\0')
	{
		if (*str != *to_find)
		{
			return (0);
		}
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && is_the_same(str, to_find))
		{
			return (str);
		}
		str++;
	}
	return (0);
}
