/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:25:09 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/10 22:19:42 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *st)
{
	int	j;

	j = 0;
	while (st[j] != '\0')
	{
		if ((st[j] > 64 && st[j] < 91))
		{
			st[j] -= 'A' - 'a';
		}
		else
		{
			st[j] = st[j];
		}
		j++;
	}
	return (st);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 1;
	if (96 < str[0] && str[0] < 123)
	{
		str[0] -= 'a' - 'A';
	}
	while (str[i] != '\0')
	{
		if (96 < str[i] && str[i] < 123)
		{
			if ((str[i -1] < 48 || str[i -1] > 57) && (str[i -1] < 65
					|| str[i -1] > 90) && (str[i -1] < 97 || str[i -1] > 122))
			{
				str[i] -= 'a' - 'A';
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
        char    p[500] = "sALUT [comMent tu+vas ? 42mots quarante-deux";

        ft_strcapitalize(p);
        printf("%s",p);
        return(0);
}*/
