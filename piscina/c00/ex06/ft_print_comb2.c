/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:14:54 by esordone          #+#    #+#             */
/*   Updated: 2022/07/13 17:13:28 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb2(void);
void	resultats(char primer, char segon);
void	conversor(int n);

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			conversor(a);
			write(1, " ", 1);
			conversor(b);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

void	conversor(int n)
{
	char	primer;
	char	segon;

	primer = (n / 10) + 48;
	segon = (n % 10) + 48;
	resultats(primer, segon);
}

void	resultats(char primer, char segon)
{
	write (1, &primer, 1);
	write (1, &segon, 1);
}
