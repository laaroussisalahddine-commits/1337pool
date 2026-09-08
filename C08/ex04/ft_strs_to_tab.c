/* **************************************************************************** */
/*                                                                              */
/*                                                          :::      ::::::::   */
/*   ft_strs_to_tab.c                                     :+:      :+:    :+:   */
/*                                                      +:+ +:+         +:+     */
/*   By: slaarous <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                  +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:55:43 by slaarous            #+#    #+#             */
/*   Updated: 2024/06/29 16:20:59 by slaarous           ###   ########.fr       */
/*                                                                              */
/* **************************************************************************** */


#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	res = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (res == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs;
	int			i;

	strs = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (strs == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		strs[i].size = ft_strlen(av[i]);
		strs[i].str = av[i];
		strs[i].copy = ft_strdup(av[i]);
		i++;
	}
	strs[i].str = 0;
	strs[i].copy = 0;
	return (strs);
}
