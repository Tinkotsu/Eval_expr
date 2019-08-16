/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:42:29 by ifran             #+#    #+#             */
/*   Updated: 2019/07/20 23:32:27 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	    g_str_new[1000];

char	    *rm_spaces(char *str)
{
    int	    i;

    i = 0;
    while (*str)
    {
	if (*str != '\n' && *str != '\r' && *str != '\f'
	    && *str != ' ' && *str != '\v' && *str != '\t')
	{
	    g_str_new[i] = *str;
	    ++i;
	}
	++str;
    }
    return (&g_str_new[0]);
}