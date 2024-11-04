/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:35:32 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/09 14:27:42 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123))
		{
			str[i] -= 'a' - 'A';
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char	p[100] = "AaBbCcDdEeFfGg";

        ft_strupcase(p);
	printf("%s",p);
        return(0);
}*/
