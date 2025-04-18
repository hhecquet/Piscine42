/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:43:40 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/12 19:15:16 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb != 0)
	{
		n *= nb;
		nb--;
	}
	return (n);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_iterative_factorial(-1));
        printf("%d\n",ft_iterative_factorial(0));
        printf("%d\n",ft_iterative_factorial(1));
        printf("%d\n",ft_iterative_factorial(5));
	printf("%d\n",ft_iterative_factorial(120));
	return (0);
}*/
