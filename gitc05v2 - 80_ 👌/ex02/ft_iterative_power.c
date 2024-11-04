/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:01:07 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/12 19:25:52 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (0);
	}
	while (power != 1)
	{
		nb *= n;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_iterative_power(-1,4));
        printf("%d\n",ft_iterative_power(0,0));
        printf("%d\n",ft_iterative_power(0,5));
        printf("%d\n",ft_iterative_power(5,-1));
        printf("%d\n",ft_iterative_power(120,1));
	printf("%d\n",ft_iterative_power(5,5));
        return (0);
}*/
