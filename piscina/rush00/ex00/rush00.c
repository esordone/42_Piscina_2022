/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:44:16 by esordone          #+#    #+#             */
/*   Updated: 2022/07/10 12:15:51 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char cadena);
void	condicions(int x, int y, int pos_x, int pos_y);

void	rush(int x, int y)
{
	int	pos_y;
	int	pos_x;

	pos_y = 1;
	while (pos_y <= y)
	{
		pos_x = 1;
		while (pos_x <= x)
		{
			condicions(x, y, pos_x, pos_y);
			pos_x++;
		}
		pos_y++;
		ft_putchar('\n');
	}
}

void	condicions(int x, int y, int pos_x, int pos_y)
{
	if ((pos_x == 1 || pos_x == x) && (pos_y == 1 || pos_y == y))
	{
		ft_putchar('o');
	}
	else if (pos_y == 1 || pos_y == y)
	{
		ft_putchar('-');
	}	
	else if (pos_x == 1 || pos_x == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
