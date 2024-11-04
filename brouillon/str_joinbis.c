/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_joinbis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:40:37 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/19 18:22:45 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(*str++)
	{
		i++;
	}
	return (i);
}

int	ft_len(int size,char **strs,char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0; 
	while (i < size)
	{
		if (!sep || !strs[i])
		{
			return (-1);
		}	
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (size -1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strcat(char	*str,char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(str);
	while (src[i])
	{
		str[j+i] = src[i];
		i++;
	}
	str[j+i] = 0;
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * (ft_len(size,strs,sep)));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	*str = 0;
	while (i < size)
	{
		ft_strcat(str,strs[i]);
		if (i < size -1)
		{
			ft_strcat(str,sep);
		}
		i++;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"Hello","World","Wide","Web"};
	char	*sep = "<>";
	int		size = 4;
	int		i = 0;
	char	*str = ft_strjoin(size,strs,sep);
	
	while (str[i])
	{
		printf("%c",str[i]);
		i++;
	}
	return (0);
}*/
