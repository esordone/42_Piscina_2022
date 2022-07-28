/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:53:09 by esordone          #+#    #+#             */
/*   Updated: 2022/07/20 15:20:06 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
void	ft_ft(int *nbr);

int	main(void)
{
	int num;
	int *nbr;

	num = 56;
	nbr = &num;

	ft_ft(nbr);
	return (0);
}*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
