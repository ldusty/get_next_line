/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:10:45 by ldusty            #+#    #+#             */
/*   Updated: 2021/12/21 18:10:52 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

char		*get_next_line(int fd);
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dsize);
char		*ft_strdup(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
#endif
