/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:21:42 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/12 19:30:18 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
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
	if (power != 1)
	{
		power--;
		nb *= ft_recursive_power(nb, power);
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
        printf("%d\n",ft_recursive_power(-1,4));
        printf("%d\n",ft_recursive_power(0,0));
        printf("%d\n",ft_recursive_power(0,5));
        printf("%d\n",ft_recursive_power(5,-1));
        printf("%d\n",ft_recursive_power(120,1));
	printf("%d\n",ft_recursive_power(120,120));
        return (0);
}*/
