/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:05:24 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/26 18:27:28 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_j(char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (ft_is_in_charset(str[i], charset) == 1)
			j = 0;
		if (ft_is_in_charset(str[i], charset) == 0 && j == 0)
		{
			j = 1;
			k++;
		}
		i++;
	}
	return (k);
}

char	*ft_strcpy(char *str, char *dest, int debut, int fin)
{
	int	i;

	i = 0;
	while (debut <= fin)
	{
		dest[i] = str[debut];
		i++;
		debut++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_set_string(char *str, char *charset, char **tab)
{
	int		i;
	int		debut;
	int		fin;
	int		j;
	char	*k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (ft_is_in_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
		debut = i;
		while (ft_is_in_charset(str[i], charset) == 0 && str[i] != '\0')
			i++;
		fin = i - 1;
		if (j < ft_count_j(str, charset))
		{
			k = (char *)malloc(sizeof(char) * (fin - debut + 1) + 1);
			tab[j] = ft_strcpy(str, k, debut, fin);
			j++;
		}
	}
	tab[j] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_count_j(str, charset) + 1));
	ft_set_string(str, charset, tab);
	return (tab);
}
/*
#include <stdio.h>
int     main(void)
{
        char    *strs = "> Hello < World > Wide < > Web >";
        char    *sep = "<>";
        int     i = 0;
        char    **str = ft_split(strs,sep);

        while (str[i])
        {
                printf("%s\n",str[i]);
                i++;
        }
        return (0);
}
*/
