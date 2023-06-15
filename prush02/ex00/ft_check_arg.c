/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:00:47 by bgomes-l          #+#    #+#             */
/*   Updated: 2023/06/11 21:56:31 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int				ft_str_is_numeric(char *str);
unsigned int	ft_atoi(char *ptrb);
int				ft_get_dict(char *buf, char *value, char *dict);
void			ft_put_error(void);
char			*ft_strcpy(char *dest, char *src);
int				ft_str_is_printable(char *str);
void			ft_put_dict_error(void);

void	ft_check_arg(int argc, char **argv)
{
	char	buf[5000];
	char	dict[40];

	ft_strcpy(dict, "numbers.dict");
	if (argc == 2)
	{
		if (ft_str_is_numeric(argv[1]) == 0)
			ft_put_error();
		else
			ft_get_dict(buf, argv[1], dict);
	}
	else if (argc == 3)
	{
		if (ft_str_is_printable(argv[1]) == 0
			|| ft_str_is_numeric(argv[2]) == 0)
			ft_put_dict_error();
		else
			ft_strcpy(dict, argv[1]);
		ft_get_dict(buf, argv[2], dict);
	}
	else
		ft_put_error();
}
