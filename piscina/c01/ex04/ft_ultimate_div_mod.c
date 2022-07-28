/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:08:51 by esordone          #+#    #+#             */
/*   Updated: 2022/07/18 11:45:15 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	num;
	int	num2;
	int	*a;
	int	*b;

	num = 16;
	num2 = 8;
	a = &num;
	b = &num2;
	ft_ultimate_div_mod(a, b);
	printf("%i, %i\n", *a, *b);
	return (0);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}
