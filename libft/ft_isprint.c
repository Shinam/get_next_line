/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 00:38:40 by averkenn          #+#    #+#             */
/*   Updated: 2014/11/13 11:11:19 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
	if ((c >= 32 && c <= 126) || c == ' ')
		return (1);
	return (0);
}
