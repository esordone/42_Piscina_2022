/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:46:13 by esordone          #+#    #+#             */
/*   Updated: 2022/07/25 18:09:18 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*int	ft_str_is_printable(char *str);

int	main(void)
{
	char 	*str;
	char	marisa[] = "u09aboa";
	int		f;

	str = marisa;
	f = ft_str_is_printable(str);
	printf("%d", f);
	return (0);
}
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32) && (str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
