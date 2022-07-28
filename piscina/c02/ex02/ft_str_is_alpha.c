/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:49:44 by esordone          #+#    #+#             */
/*   Updated: 2022/07/27 14:24:31 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	char	nyam[] = "0";
	int		k;

	str = nyam;
	k =	ft_str_is_alpha(str);
	printf("%d", k);
	return (0);
}
*/
int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{	
		if ((!(str[i] >= 'a' && str[i] <= 'z'))
			&& (!(str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
