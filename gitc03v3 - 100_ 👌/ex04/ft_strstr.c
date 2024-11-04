/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:14:06 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/11 14:24:23 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && j != ft_strlen(to_find))
	{
		if (str[i + j] == to_find[j])
		{
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	if (j == ft_strlen(to_find))
	{
		return (&str[i]);
	}
	return (NULL);
}
/*
#include <string.h>
int main(void)
{
	printf("%s\n", ft_strstr("Bonjour mon bro je t'aime ;)","je"));
        printf("%s",strstr("Bonjour mon bro je t'aime ;)","je"));
        return(0);
}*/
