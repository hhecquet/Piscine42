/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:48:04 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/15 14:48:13 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	int	a;
	a = ft_strcmp("ABCde", "ABC");
	printf("%d\n",a);
	a = strcmp("ABCde", "ABC");
	printf("%d\n",a);
	a = ft_strcmp("ABC", "ABCde");
        printf("%d\n",a);
        a = strcmp("ABC", "ABCde");
        printf("%d\n",a);
	a = ft_strcmp("ABC", "ABC");
        printf("%d\n",a);
        a = strcmp("ABC", "ABC");
        printf("%d\n",a);
	return(0);
}*/
