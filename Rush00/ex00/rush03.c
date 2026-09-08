/* **************************************************************************** */
/*                                                                              */
/*                                                          :::      ::::::::   */
/*   rush03.c                                             :+:      :+:    :+:   */
/*                                                      +:+ +:+         +:+     */
/*   By: slaarous <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                  +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:55:43 by slaarous            #+#    #+#             */
/*   Updated: 2024/06/29 16:20:59 by slaarous           ###   ########.fr       */
/*                                                                              */
/* **************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ix;
	int	jy;

	jy = 1;
	while (jy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if ((jy == 1 && ix == 1) || (jy == y && ix == 1))
				ft_putchar('A');
			else if ((jy == 1 && ix == x) || (jy == y && ix == x))
				ft_putchar('C');
			else if (jy == 1 || jy == y || ix == 1 || ix == x)
				ft_putchar('B');
			else 
				ft_putchar(' ');
			ix++; 
		}
		ft_putchar('\n');
		jy++;
	}
}
