/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:38:08 by esordone          #+#    #+#             */
/*   Updated: 2022/07/22 15:50:54 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);
void	escriu(char resultat);
void	recursivitat(int nb);

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
		recursivitat(nb);
	}
	else if (nb <= 2147483647)
	{
		recursivitat(nb);
	}
	else
	{
		recursivitat(nb);
	}	
}

void	recursivitat(int nb)
{
	if (nb > 9)
	{
		recursivitat(nb / 10);
		escriu (nb % 10 + '0');
	}
	else
		escriu(nb + '0');
}

void	escriu(char resultat)
{
	write (1, &resultat, 1);
}
