/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:11:24 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/11 21:51:37 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_atoi(char *ptrb);

int				ft_str_is_numeric(char *str);

void			ft_check_arg(int argc, char **argv);

int				ft_get_dict(char *buf, char *value, char *dict);

int	main(int argc, char **argv)
{
	ft_check_arg(argc, argv);
}
