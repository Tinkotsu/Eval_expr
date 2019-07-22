/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_prio.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 21:36:50 by ifran             #+#    #+#             */
/*   Updated: 2019/07/21 17:19:33 by ifran            ###   ########.fr       */
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
