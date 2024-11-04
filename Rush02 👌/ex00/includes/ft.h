/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:08:48 by adelattr          #+#    #+#             */
/*   Updated: 2024/09/22 21:48:17 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <errno.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct t_value
{
	char	*nb;
	char	*value;
}	t_value;

unsigned long	ft_count_size(char *filename);
int				ft_check_dict(int fd, int bytesr);
t_value			*ft_create_tab(char *filename);
char			*ft_strdupnb(char *src);
int				ft_char_is_printable(char c);
int				ft_atoirush(char *str);
unsigned long	ft_count_size(char *filename);
int				ft_tab_nb(t_value *tab, int j, int i, char *buffer);
int				ft_strlen(char *str);
t_value			*ft_verif_value(t_value *tab, int i, int j, int k);
void			ft_send(char *str, t_value *tab);
void			ft_first(char *str, t_value *tab);
void			ft_aff(char *str, t_value *tab);
void			ft_aff_str0(char *str, t_value *tab);
void			ft_putstr(char *str);
void			ft_send2(int k, t_value *tab, char *des, int i);
void			ft_send3(char *des, char *dest, t_value *tab, int i);
void			ft_send4(char *aff, char *des, int i);
void			ft_do_3(int fd, char *s1, char *s2, t_value *tab);
void			ft_sort_struct(t_value *tab);
void			ft_free_struct(t_value *tab);
int				ft_is_number(char *str);

#endif