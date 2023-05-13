/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalope <alvalope@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:32:20 by alvalope          #+#    #+#             */
/*   Updated: 2023/05/08 17:05:39 by alvalope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

void	ft_bzero(void *s, size_t len)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

int	ft_search_newline(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_free_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		s1_l;

	if (!s1)
		s1 = ft_calloc(1, 1);
	if (!s1 || !s2)
		return (0);
	s1_l = ft_strlen(s1);
	str = ft_calloc(s1_l + ft_strlen(s2) + 1, 1);
	if (!str)
		return (0);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	i = -1;
	while (s2[++i])
		str[i + s1_l] = s2[i];
	free (s1);
	return (str);
}
