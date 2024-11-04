/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:15:31 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/12 19:39:50 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while ((nb % n) != 0)
	{
		n++;
	}
	if (nb == n)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_is_prime(-1));
	printf("%d\n",ft_is_prime(0));
	printf("%d\n",ft_is_prime(1));
	printf("%d\n",ft_is_prime(2));
	printf("%d\n",ft_is_prime(5));
	printf("%d\n",ft_is_prime(12));
	return(0);
}*/
