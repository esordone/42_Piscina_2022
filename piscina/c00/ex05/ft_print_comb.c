/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:11:56 by esordone          #+#    #+#             */
/*   Updated: 2022/07/12 17:13:37 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void);
void	resultat(char c, char d, char u);
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

void	ft_print_comb(void)
{
	char	u;
	char	c;
	char	d;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				resultat (c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}

void	resultat(char c, char d, char u)
{
	if (c == '7' && d == '8' && u == '9')
	{
		write (1, &c, 1);
		write (1, &d, 1);
		write (1, &u, 1);
	}
	else
	{	
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &u, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
