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

int		check_prio(int cur_op, int prev_op)
{
	if (prev_op == 6 || cur_op == 7 || cur_op == 6)
		return (0);
	if (prev_op == cur_op)
		return (1);
	else if ((cur_op == 1 || cur_op == 2) && (prev_op == 1 || prev_op == 2))
		return (1);
	else if (cur_op <= 2 && cur_op > 0 && prev_op >= 3)
		return (1);
	else if ((cur_op > 2 && prev_op > 2))
		return (1);
	else
		return (0);
}

int		is_op(char expr)
{
	if (expr == '+')
		return (1);
	else if (expr == '-')
		return (2);
	else if (expr == '*')
		return (3);
	else if (expr == '/')
		return (4);
	else if (expr == '%')
		return (5);
	else if (expr == '(')
		return (6);
	else if (expr == ')')
		return (7);
	else
		return (0);
}

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
