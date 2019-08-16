/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:22:29 by ifran             #+#    #+#             */
/*   Updated: 2019/07/20 16:10:17 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb == 0)
		ft_putchar('0');
	return (nb);
}

void	ft_putnbr(int nb)
{
	int		n;
	char	arr[11];

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
		return ;
	}
	n = 0;
	nb = check(nb);
	while (nb > 0)
	{
		arr[n] = '0' + (nb % 10);
		nb /= 10;
		++n;
	}
	--n;
	while (n >= 0)
	{
		ft_putchar(arr[n]);
		--n;
	}
}
