/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 05:06:52 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/13 21:05:29 by pmelo-ca         ###   ########.fr       */
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
	str = "123456789";
	ft_strlen(str);
	printf("%d", counter); //line 27.
} */