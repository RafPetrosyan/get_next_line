/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:53:53 by rafpetro          #+#    #+#             */
/*   Updated: 2024/03/04 18:43:16 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	int			read_size;
	char		*ret;
	char		*temp;
	static char	buffer[OPEN_MAX][BUFFER_SIZE];

	temp = 0;
	ret = 0;
	if (fd >= 0 && buffer[fd][0] != '\0')
	{
		temp = ft_strjoin(temp, buffer[fd], BUFFER_SIZE);
		rearrange(buffer[fd]);
		if (ft_check(temp) == 1)
			return (temp);
	}
	read_size = read(fd, buffer[fd], BUFFER_SIZE);
	while (read_size > 0 && fd >= 0)
	{
		ret = ft_strjoin(temp, buffer[fd], read_size);
		temp = ret;
		rearrange(buffer[fd]);
		if (ft_check(ret) == 1)
			return (ret);
		read_size = read(fd, buffer[fd], BUFFER_SIZE);
	}
	return (temp);
}
