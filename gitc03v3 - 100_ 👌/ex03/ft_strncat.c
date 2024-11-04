/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:45:51 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/11 14:20:43 by hhecquet         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] && i < nb)
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
        char    *a;
        char    des1[500] = "Bonjour ";
	char    des2[500] = "Bonjour ";
	char    des3[500] = "Bonjour ";
	char    des4[500] = "Bonjour ";


        a = ft_strncat(des1,"la miff",2);
        printf("%s\n",a);
	a = strncat(des2,"la miff",2);
        printf("%s\n",a);
	a = ft_strncat(des3,"la miff",20);
        printf("%s\n",a);
	a = strncat(des4,"la miff",20);
        printf("%s\n",a);
        return(0);
}*/
