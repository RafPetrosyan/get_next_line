/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:53:53 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/17 19:47:22 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*temp;
	char		*ret;
	int			read_size;

	read_size = read(fd, buffer, BUFFER_SIZE);

	if (read_size <= 0)
		return (0);
	temp = ft_strdup("\0");
	while (read_size > 0)
	{
		ret = ft_strjoin(temp, buffer, read_size);
		free(temp);
		temp = ret;
		read_size = read(fd, buffer, BUFFER_SIZE);
	}
	return (ret);
}

#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd = open("tester/files/41_with_nl", O_RDONLY);
	char *str = get_next_line(fd);
	printf("%s\n", str);
}