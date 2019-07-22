/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:23:14 by ifran             #+#    #+#             */
/*   Updated: 2019/07/20 23:20:21 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		do_op(int op, int num2, int num1)
{
	if (op == 1)
		return (ft_add(num1, num2));
	else if (op == 2)
		return (ft_sub(num1, num2));
	else if (op == 3)
		return (ft_mul(num1, num2));
	else if (op == 4)
		return (ft_div(num1, num2));
	else if (op == 5)
		return (ft_mod(num1, num2));
	return (0);
}
