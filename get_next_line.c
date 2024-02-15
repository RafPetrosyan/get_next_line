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
	char	buffer[BUFFER_SIZE];
	char	*temp;
	char	*ret;
	int		read_size;

	temp[0] = '\0';
	read_size = read(fd, buffer, BUFFER_SIZE);
	while (read_size > 0)
	{
		temp = ft_strjoin(temp, buffer, );
		ret = temp;
	}
}
