/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:36:10 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/08 15:55:35 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
#include <stdio.h>

int main()
{
	int	d = 101;
	int	e = 10;
	int	*p1;
	int	*p2;

	p1 = &d;
	p2 = &e;
        ft_ultimate_div_mod(p1,p2);
        printf("%d %d", *p1, *p2);
        return(0);
}*/
