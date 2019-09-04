/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 17:30:33 by ifran             #+#    #+#             */
/*   Updated: 2019/09/03 19:21:54 by ifran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		++str;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		n;
	char	*temp;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			n = i;
			while (++n < argc)
			{
				if (ft_strcmp(argv[i], argv[n]) > 0)
				{
					temp = argv[i];
					argv[i] = argv[n];
					argv[n] = temp;
				}
			}
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
