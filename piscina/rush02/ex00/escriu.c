/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   escriu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:41:51 by esordone          #+#    #+#             */
/*   Updated: 2022/07/24 11:55:23 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_all(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_values(char *str, int i)
{
	while (str[i] != '\n')
	{
		if (str[i] != ' ' && str[i] != ':')
			write(1, &str[i], 1);
		i++;
	}
}

void	find_str(char *str, char *nbr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == nbr[0])
			print_values(str, i);
		i++;
	}
}
