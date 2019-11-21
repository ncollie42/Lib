/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 17:49:04 by ncollie           #+#    #+#             */
/*   Updated: 2019/11/19 23:53:22 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <strings.h>
# include <unistd.h>
# include "libft.h"
# define BUFF_SIZE 1

int		return_line(const int fd, char **line, char **hash);
int		get_next_line(const int fd, char **line);
void	useless_function(int fd, char **other, char **hash);
#endif
