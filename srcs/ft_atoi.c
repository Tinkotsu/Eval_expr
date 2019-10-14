/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:17:32 by ifran             #+#    #+#             */
/*   Updated: 2019/07/08 16:42:21 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*clearing(char *str)
{
	while ((*str == ' ') || (*str == '\t') || (*str == '\r')
			|| (*str == '\n') || (*str == '\v') || (*str == '\f'))
		str++;
	return (str);
}

int		ft_atoi(char *str)
{
	int		sign;
	int		n;

	sign = 1;
	n = 0;
	str = clearing(str);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((*str >= '0') && (*str <= '9'))
	{
		n = 10 * n + (*str - '0');
		str++;
	}
	return (n * sign);
}
