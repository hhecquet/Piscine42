/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 01:11:03 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/09 14:28:02 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91))
		{
			str[i] -= 'A' - 'a';
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
        char    p[100] = "AaBbCcDdEeFfGg";

        ft_strlowcase(p);
        printf("%s",p);
        return(0);
}*/
