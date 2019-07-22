/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:47:58 by ifran             #+#    #+#             */
/*   Updated: 2019/07/22 02:49:58 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

int			g_dig_ar[1000];
int			g_op_ar[1000];
int			g_i;
int			g_k;

void	push_int(char **expr)
{
	int check_len;

	if ((**expr == '-' && (g_i == 0 || ((g_dig_ar[g_i - 1] < '0' || g_dig_ar[g_i - 1] > '9')
						&& (g_dig_ar[g_i + 1] >= '0' && g_dig_ar[g_i + 1] <= '9'))))
			|| (**expr >= '0' && **expr <= '9'))
	{
		g_dig_ar[g_i] = ft_atoi(*expr);
		check_len = g_dig_ar[g_i];
		++g_i;
		if (check_len < 0)
			++(*expr);
		while (check_len >= 10 || check_len <= -10)
		{
			check_len /= 10;
			++(*expr);
		}
	}
}

void	push_op1(int op_int)
{
	if (op_int == 7)
	{
		--g_k;
		while (g_op_ar[g_k] != 6)
		{
			g_dig_ar[g_i - 2] = do_op(g_op_ar[g_k],\
					g_dig_ar[g_i - 1], g_dig_ar[g_i - 2]);
			g_dig_ar[g_i - 1] = 0;
			g_op_ar[g_k] = 0;
			--g_k;
			--g_i;
		}
		g_op_ar[g_k] = 0;
	}
}

void	push_op2(int op_int)
{
	if (g_i > 0 && g_k > 0 && g_k < 6
			&& check_prio(op_int, g_op_ar[g_k - 1]))
	{
		while (g_i > 1 && g_k > 0 && check_prio(op_int, g_op_ar[g_k - 1]))
		{
			g_dig_ar[g_i - 2] = do_op(g_op_ar[g_k - 1],\
					g_dig_ar[g_i - 1], g_dig_ar[g_i - 2]);
			g_dig_ar[g_i] = 0;
			g_op_ar[g_k] = 0;
			--g_i;
			--g_k;
		}
		g_op_ar[g_k] = op_int;
		++g_k;
	}
	else
	{
		g_op_ar[g_k] = op_int;
		++g_k;
	}
}

void	result(void)
{
	if (g_k > 0)
		--g_k;
	if (g_i > 0)
		--g_i;
	while (g_i >= 0)
	{
		g_dig_ar[g_i - 1] = do_op(g_op_ar[g_k],\
				g_dig_ar[g_i], g_dig_ar[g_i - 1]);
		--g_k;
		--g_i;
	}
}

int		eval_expr(char *expr)
{
	int		op_int;

	g_i = 0;
	g_k = 0;
	while (ft_isspace(*expr))
		++expr;
	while (*expr)
	{
		push_int(&expr);
		op_int = is_op(*expr);
		if (op_int)
		{
			if (op_int == 7)
				push_op1(op_int);
			else
				push_op2(op_int);
		}
		++expr;
	}
	result();
	return (g_dig_ar[0]);
}
