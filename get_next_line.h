/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 00:29:02 by averkenn          #+#    #+#             */
/*   Updated: 2015/02/07 21:24:02 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUF_SIZE 8
# define MAX_FILE 300

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int	get_next_line(int const fd, char **line);

#endif
