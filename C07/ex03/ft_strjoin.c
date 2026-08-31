/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 11:13:58 by slaarous          #+#    #+#             */
/*   Updated: 2026/08/31 11:31:23 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_append(char *dest, char *src)
{
	int	i;
	int	pos;

	pos = ft_len(dest);
	i = 0;
	while (src[i])
	{
		dest[pos + i] = src[i];
		i++;
	}
	dest[pos + i] = '\0';
}

char	*ft_empty(void)
{
	char	*new;

	new = malloc(1);
	if (!new)
		return (NULL);
	new[0] = '\0';
	return (new);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		total_len;
	int		i;

	if (size == 0)
		return (ft_empty());
	total_len = 0;
	i = 0;
	while (i < size)
		total_len += ft_len(strs[i++]);
	total_len += ft_len(sep) * (size - 1);
	new = malloc(sizeof(char) * (total_len + 1));
	if (!new)
		return (NULL);
	new[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_append(new, strs[i]);
		if (i < size - 1)
			ft_append(new, sep);
		i++;
	}
	return (new);
}
