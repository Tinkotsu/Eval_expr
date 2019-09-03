/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 16:49:30 by ifran             #+#    #+#             */
/*   Updated: 2019/09/03 17:03:20 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;

	if (nb == 0)
		return (1);
	else if (nb <= 12 && nb > 0)
	{
		n = nb;
		while (--n > 1)
			nb *= n;
		return (nb);
	}
	else
		return (0);
}
