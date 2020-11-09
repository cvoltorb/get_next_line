/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvoltorb <cvoltorb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 20:00:11 by cvoltorb          #+#    #+#             */
/*   Updated: 2020/07/30 20:00:37 by cvoltorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int			get_next_line(int fd, char **line);
char		*ft_strncpy(char *dst, char *src, size_t len);
char		*ft_strdup(char *s1);
int			is_nl(char *s);
size_t		line_len(char *str);
size_t		buff_len(char *str);

#endif
