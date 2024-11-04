/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:11:14 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/11 22:40:18 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	res;

	res = 0;
	i = 0;
	j = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			j *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * j);
}
/*
#include <stdio.h>
int    main(void)
{
	printf("%d\n", ft_atoi("  \t\n --+26 1120--+-"));
        //printf("%d\n", atoi("--+261120--+-"));
	printf("%d\n", ft_atoi("  a--+261120--+-"));
        //printf("%d\n", atoi("a--+261120--+-"));
	printf("%d\n", ft_atoi("  \t\n -- +261120a--+-"));
        //printf("%d\n", atoi("--+261120a--+-"));
        return (0);
}*/
