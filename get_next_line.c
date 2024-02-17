/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:53:53 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/15 18:50:01 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*temp;
	char		*ret;
	int			read_size;
	int			full_size;

	full_size = 1;
	temp[0] = '\0';
	read_size = read(fd, buffer, BUFFER_SIZE);
	if (read_size <= 0)
		return (0);
	while (read_size > 0)
	{
		if (ft_check(buffer))
			
		ret = ft_strjoin(temp, buffer, read_size);
		if (full_size > 2 * read_size)
			free(temp);
		temp = ret;
	}
	return (0);
}
