/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 14:00:18 by slaarous          #+#    #+#             */
/*   Updated: 2026/08/31 11:37:50 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		i;
	int		*poin;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	poin = malloc(sizeof(int) * size);
	if (poin == NULL)
		return (-1);
	*range = poin;
	i = 0;
	while (i < size)
	{
		poin[i] = min + i;
		i++;
	}
	return (size);
}

/*
#include<stdio.h>

int main(void)
{
	int i;
	int size;
	int *arr;

	arr = NULL;
	size = ft_ultimate_range(&arr,2,7);

	printf("size = %d\n",size);

	if (arr != NULL)
	{
		i = 0;
		while(i < size)
		{
			printf("%d\n", arr[i]);
			i++;
		}
		free(arr);
	}
	return(0);

}
*/