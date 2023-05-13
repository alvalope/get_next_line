/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalope <alvalope@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:03:49 by alvalope          #+#    #+#             */
/*   Updated: 2023/05/08 17:00:07 by alvalope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_strlen(char *str);
void	ft_bzero(void *s, size_t len);
void	*ft_calloc(size_t count, size_t size);
int		ft_search_newline(char *s);
char	*ft_free_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
