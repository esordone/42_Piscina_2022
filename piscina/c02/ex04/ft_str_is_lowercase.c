/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:06:05 by esordone          #+#    #+#             */
/*   Updated: 2022/07/25 16:43:07 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char 	*str;
	char	pepa[] = "cacatua";
	int	voila;

	str = pepa;
	voila = ft_str_is_lowercase(str);
	printf("%d", voila);
	return (0);
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}	
		i++;
	}
	return (1);
}
