/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:58:39 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/23 16:16:01 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src++)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	if (size > j)
		res = ft_strlen(src) + j;
	else
		res = ft_strlen(src) + size;
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (res);
}

/*
#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	char	dest[] = "";
	char	src[] = "12345678";
	char	dest2[] = "";
	char	src2[] = "12345678";
	printf("%d\n",ft_strlcat(dest,src,1));
	printf("%s\n",dest);
	printf("%zu\n",strlcat(dest2,src2,1));
	printf("%s\n",dest2);
	return(0);
}*/
//cc -Wall -Wextra -Werror -g -lbsd ft_strlcpy.c && ./a.out
