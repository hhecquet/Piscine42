/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:36:51 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/19 23:39:00 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char	ft_len()
{	
	int	i;
	int	k;
	int	*var;
	char	*tab;
	
	var = malloc(sizeof(int) * ft_strlen(str));
	tab = 0;
	i = 0;
	k = 0;
	while (str[i])
	{
		var[i] = ft_charset(&str[i],sep);
		if (var[i] == 1 && var[i-1] == 0)
		{
			k++;
		}
		else if (var[i] == 0)
		{
			ft_strcat(&tab[k],&str[i]);
		}
		i++;	
	}
	if (tab[k] != 0)
	{
		tab[k+1] = 0;
	}
	return (tab);
}
char **ft_split(char *str, char *charset)
{
	char	*tab;
	char	**dest;

	dest = 0;
	(void)charset;
	tab = malloc(sizeof(char) * (ft_strlen(ft_len(str,charset))));
	if (!tab)
	{
		return (NULL);
	}
	tab = ft_len(str,charset); 
	*dest = tab;
	return (dest);
		
}

#include <stdio.h>
int     main(void)
{
        char    *scr = "Hello ,World Wide,Web";
        char    *sep = " ,";
        int	i = 0;
        char    **str = ft_split(scr,sep);

        while (str[i])
        {
                printf("%s",str[i]);
                i++;
        }
        return (0);
}
