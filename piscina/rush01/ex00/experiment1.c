/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:51:46 by esordone          #+#    #+#             */
/*   Updated: 2022/07/17 19:50:56 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	base (4,4);
	return (0);
}

int	base(int pos_y, int pos_x, int x, int y)
{
	x = 4;
	y = 4;
	/*pasamos negativos a positivos*/
	if (x =< 0) 
	{
		x = x * (-1);
	}
	/*limite numero introducido*/
	if (x <= 4 && x > 0)
	{
		escribe();
	}
	else
	{
		escribe("Error");
	}
	pos_y =1;
	while (pos_y <= y)
	{
		pos_x = 1;
		while (pos_x <= x)
		{
			condicions(x, y, pos_x, pos_y);
			pos_x++;
		}
		pos_y++;
		escribe('\n');
	}
}

void	escribe(char m)
{
	char m;

	converteix(m % 10 + '0');
	write(1, &m, 1);
}

void	condicions(int x, int y, int pos_x, int pos_y)
{
	if ((pos_x == 1 || pos_x == x) && (pos_y == 1 || pos_y == y))
	{
		escribe(4);
	}
	else if (pos_y == 1 || pos_y ==y)
	{
		escribe(567);
	}
	else if (pos_x == 1 || pos_x == x)
	{
		escribe(963);
	}
	else
	{
		escribe(' ');
	}
}
