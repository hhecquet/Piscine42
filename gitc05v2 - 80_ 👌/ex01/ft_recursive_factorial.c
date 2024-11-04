/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:24:43 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/12 19:23:05 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb != 1)
	{
		nb--;
		n *= ft_recursive_factorial(nb);
	}
	return (n);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%d\n",ft_recursive_factorial(-1));
	printf("%d\n",ft_recursive_factorial(0));
	printf("%d\n",ft_recursive_factorial(1));
	printf("%d\n",ft_recursive_factorial(5));
	printf("%d\n",ft_recursive_factorial(120));
        return (0);
}*/
