/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:35:01 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/24 22:42:17 by hhecquet         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	while (src[i] && size > 1)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	char	dest[] = "1546546464664";
	char	src[] = "12345678";
	char	dest2[] = "1546546464664";
	char	src2[] = "12345678";
	printf("%d\n",ft_strlcpy(dest,src,75));
	printf("%s\n",dest);
	printf("%zu\n",strlcpy(dest2,src2,75));
	printf("%s\n",dest2);
	return(0);
}*/
//cc -Wall -Wextra -Werror -g -lbsd ft_strlcpy.c && ./a.out
