/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:49:19 by ifran             #+#    #+#             */
/*   Updated: 2019/09/03 18:49:47 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int *start;

	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(int) * (max - min));
	start = range;
	if (!range)
		return (range);
	while (min < max)
	{
		*range = min;
		++min;
		++range;
	}
	return (start);
}
