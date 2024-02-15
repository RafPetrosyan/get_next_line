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

char	*ft_strjoin(char const *s1, char const *s2, int size, char c)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (str == 0)
		return (0);
	while (s1[i] != c)
	{
		str[i] = s1[i];
		++i;
	}
	while (s2[j] != c && size > 0)
	{
		str[i + j] = s2[j];
		++j;
		--size;
	}
	str[i + j] = c;
	return (str);
}
