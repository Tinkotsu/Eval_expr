/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 19:15:18 by ifran             #+#    #+#             */
/*   Updated: 2019/07/21 13:25:17 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <unistd.h>

int						ft_atoi(char *str);
void						ft_putchar(char c);
void						ft_putnbr(int nb);
int						evalexpr(char *expr);
int						main(int ac, char **av);
int						is_op(char expr);
int						ft_isspace(char str);
int						ft_add(int num1, int num2);
int						ft_mul(int num1, int num2);
int						ft_sub(int num1, int num2);
int						ft_mod(int num1, int num2);
int						ft_div(int num1, int num2);
int						check_prio(int cur_op, int prev_op);
int						do_op(int op, int num2, int num1);
int						eval_expr(char *expr);
int						ft_strlen(char *str);
char						*rm_spaces(char *str);

#endif
