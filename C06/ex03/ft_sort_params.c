/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 20:02:54 by slaarous          #+#    #+#             */
/*   Updated: 2026/08/25 20:52:26 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_arg(int *tab)
{
	int i;
	int j;
	int temp;

	i = 0;
	while(i < size)
	{
		j = 0;
		while(j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	ft_sort_arg(&argv[j][i]);
	i++;	
}
