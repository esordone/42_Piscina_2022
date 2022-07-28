/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lectura.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:59:37 by esordone          #+#    #+#             */
/*   Updated: 2022/07/24 22:26:44 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_lectura(char *num, char *dict)
{
	int		i;

	i = 0;
	while (dict[i] != num[0])
	{
		i++;
	}
	while (dict[i] != '\n')
	{
		if (dict[i] == ':' || dict[i] == ' ')
		{
			i++;
		}
		else if (dict[i] >= '0' && dict[i] <= '9')
		{
			i++;
		}
		else
		{
			write(1, &dict[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
