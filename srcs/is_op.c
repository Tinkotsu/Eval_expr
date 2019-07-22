/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:05:12 by ifran             #+#    #+#             */
/*   Updated: 2019/07/21 13:11:35 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
