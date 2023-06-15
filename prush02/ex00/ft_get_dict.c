/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 10:54:05 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/06/11 22:07:11 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);
void	ft_putchar(char c);
char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);

char	*ft_strcpline(char *match_line, char *matching_substring)
{
	int	i;

	i = 0;
	while (matching_substring[i] != '\n')
	{
		match_line[i] = matching_substring[i];
		i++;
	}
	match_line[i] = '\0';
	return (match_line);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count_dest;

	i = 0;
	count_dest = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	while (src[i] != '\0')
	{
		dest[count_dest + i] = src[i];
		i++;
	}
	dest[count_dest + i] = '\0';
	return (dest);
}

int	ft_get_dict(char *buf, char *value, char *dict)
{
	int		fd;
	int		rt;
	char	*match_substring;
	char	*match_line;

	fd = open(dict, O_RDONLY);
	rt = read(fd, buf, 5000);
	buf[rt] = '\0';
	match_substring = ft_strstr(buf, value);
	match_line = ft_strcpline(value, match_substring);
	ft_putstr(match_line);
	close(fd);
	return (0);
}
