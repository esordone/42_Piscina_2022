/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:32:16 by esordone          #+#    #+#             */
/*   Updated: 2022/07/20 15:20:23 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	num;
	int	*nbr;
	int	**pt2;
	int	***pt3;
	int	****pt4;
	int	*****pt5;
	int	******pt6;
	int	*******pt7;
	int	********pt8;
	int	*********pt9;

	num = 12;
	nbr = &num;
	pt2 = &nbr;
	pt3 = &pt2;
	pt4 = &pt3;
	pt5 = &pt4;
	pt6 = &pt5;
	pt7 = &pt6;
	pt8 = &pt7;
	pt9 = &pt8;
	ft_ultimate_ft(pt9);
	return (0);
}
*/
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
