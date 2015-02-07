/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 10:20:42 by averkenn          #+#    #+#             */
/*   Updated: 2015/01/28 23:26:45 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int c)
{
	if (c == -2147483648)
		ft_putstr("-2147483648");
	else if (c < 0)
	{
		ft_putchar('-');
		c = c * -1;
	}
	if (c >= 10)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	else
		ft_putchar(c + 48);
}