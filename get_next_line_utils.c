/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:11:31 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/15 18:49:56 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char *s2, int read_size)
{
	int		i;
	int		j;
	char	*str;
	int 	mal_size;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	mal_size = ft_check(s2);
	if (mal_size < 0)
		mal_size = BUFFER_SIZE + 1;
	else
		++mal_size;
	str = (char *)malloc((ft_strlen(s1) + mal_size) * (sizeof(char)));
	if (str == 0)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		++i;
	}
	while (j < mal_size)
	{
		str[i + j] = s2[j];
		++j;
	}
	if (ft_check(s2) >= 0)
		str[i + j] = '\n';
	else
		str[i + j] = '\0';
	return (str);
}

int	ft_check(char *buf)
{
	int	i;

	i = 0;
	while(buf[i] != '\0')
	{
		if (buf[i] == '\n')
			return (i);
		++i;
	}
	return (-1);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}