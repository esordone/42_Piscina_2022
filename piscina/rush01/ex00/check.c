/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:53:00 by smarco            #+#    #+#             */
/*   Updated: 2022/07/17 21:06:40 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	condicions(int cadena[], int *pt1, int x, int y, int argc);
void	escribe(char c);

int main(int argc, char **argv)
{
	int col1[4] = {2,3,1,4};
	int row1[4]	= {4,3,2,1};
	int colup[4] = {2,3,3,1};
	int coldown[4] = {3,1,2,3};
	int rowleft[4] = {2,1,2,2};
	int rowright[4] = {1,4,2,3};
	int contero1 = 1;
	int contero2 = 1;
	int contero3 = 1;
	int contero4 = 1;
	int i = 0;

	while (i < 4 && col1[i] != 4) 
	{
		if (col1[i] < col1[i+1])
		{
			contero1++;
			i++;
		}
		else
			i++;
	}
	i = 3;
	while (i>0 && col1[i] != 4)
	{
		if (col1[i] < col1[i-1])
		{
			contero2++;
			i--;
		}
		else
			i--;
	}
	i = 0;
	while (i < 4 && row1[i] != 4 )
	{
		if (row1[i] < row1[i+1])
		{
			contero3++;
			i++;
		}
		else
			i++;
	}

	i = 3;
	while (i>0 && row1[i] != 4)
	{
		if (row1[i] < row1[i-1] )
		{
			contero4++;
			i--;
		}
		else
			i--;
	}
	if ((contero1 == colup[1]) && (contero2 == coldown[1]) && (contero3 == rowleft[1]) && (contero4 == rowright[1]))
		write(1, "VOILA :)", 8);
	else
		write(1, "NO VOILA", 8);
}
