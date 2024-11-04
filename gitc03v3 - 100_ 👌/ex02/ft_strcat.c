/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:25:28 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/11 14:16:47 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char 	*a;
	char	des1[500] = "Bonjour ";
	char    des2[500] = "Bonjour ";
	char    des3[500] = "Bonjour ";
	char    des4[500] = "Bonjour ";

	a = ft_strcat(des1,"la miff");
	printf("%s\n",a);
	a = strcat(des2,"la miff");
        printf("%s\n",a);
	a = ft_strcat(des3,"\nla miff");
        printf("%s\n",a);
	a = strcat(des4,"\nla miff");
        printf("%s\n",a);
	return(0);
}*/
