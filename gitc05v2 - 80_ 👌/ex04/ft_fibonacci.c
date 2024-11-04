/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:36:36 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/12 19:34:10 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_fibonacci(-3));
	printf("%d\n",ft_fibonacci(0));
	printf("%d\n",ft_fibonacci(1));
	printf("%d\n",ft_fibonacci(2));
	printf("%d\n",ft_fibonacci(3));
	printf("%d\n",ft_fibonacci(10));
	printf("%d\n",ft_fibonacci(45));
	return(0);
}*/
