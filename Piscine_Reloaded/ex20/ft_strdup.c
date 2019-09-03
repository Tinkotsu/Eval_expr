/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:46:27 by ifran             #+#    #+#             */
/*   Updated: 2019/09/03 18:48:23 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strcpy(char *dest, char *src)
{
	char *start;

	start = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (*str)
	{
		++str;
		++len;
	}
	return (len);
}

char			*ft_strdup(char *src)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
		return (str);
	str = ft_strcpy(str, src);
	return (str);
}
