/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:47:37 by esordone          #+#    #+#             */
/*   Updated: 2022/07/22 11:23:11 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	*pt;
	int	tab[5] = {0, 3, 8, 5, 1};
	int	i;

	pt = &tab[0];
	ft_sort_int_tab(pt, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", pt[i]);
		i++;
	}
	return (0);
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	num;
	int	num2;
	int	aux;

	num = 0;
	while (num < size)
	{
		num2 = num + 1;
		while (num2 < size)
		{
			if (tab[num] > tab[num2])
			{
				aux = tab[num2];
				tab[num2] = tab[num];
				tab[num] = aux;
			}
			num2++;
		}
		num++;
	}
}
