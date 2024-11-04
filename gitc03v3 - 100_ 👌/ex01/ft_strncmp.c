/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:50:08 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/11 14:09:48 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
        int     a;
        a = ft_strncmp("ABC", "ABCDE",5);
        printf("%d\n",a);
        a = strncmp("ABC", "ABCDE",5);
        printf("%d\n",a);
	a = ft_strncmp("ABCDE", "ABC",5);
        printf("%d\n",a);
        a = strncmp("ABCDE", "ABC",5);
        printf("%d\n",a);
	a = ft_strncmp("ABC", "ABC",5);
        printf("%d\n",a);
        a = strncmp("ABC", "ABC",5);
        printf("%d\n",a);
        return(0);
}*/
