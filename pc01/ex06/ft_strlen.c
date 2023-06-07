/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:36:47 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/04 23:41:06 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	char	*string;
	int		counter;

	counter = 0;
	string = str;
	while (*string != '\0')
	{
		string++;
		counter++;
	}
	return (counter);
}

/* int	main(void)
{
	char *str;
	str = "I need somebody! Help\n -Beatles";
	ft_strlen(str);
	printf("%d", counter); line 28.
} */