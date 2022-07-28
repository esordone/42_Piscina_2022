/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:06:14 by esordone          #+#    #+#             */
/*   Updated: 2022/07/22 11:22:55 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*void	ft_rev_int_tab(int *tab, int size);

int	 main(void)
{
	int	*pt;
	int tab[5] = {0, 1, 2, 3, 4};
	int i;

	pt = &tab[0];
	ft_rev_int_tab(pt, 5);
	i =  0;
	while (i < 5)
	{
		printf("%d", pt[i]);
		i++;
	}
	return (0);
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int		k;
	int		fantasma;

	k = 0;
	while (k < (size / 2))
	{
		fantasma = tab[k];
		tab[k] = tab[size - 1 - k];
		tab[size - 1 - k] = fantasma;
		k++;
	}
}
