/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:44:47 by esordone          #+#    #+#             */
/*   Updated: 2022/07/28 19:46:30 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	f;
	int	i;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] == to_find[f] && str[i + f] != '\0')
		{
			if (to_find[f + 1] == '\0')
			{
				return (&str[i]);
			}
			f++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	pepita[] = "orxata amb fartons";
	char	*to_find;

	to_find = "";
	printf("%s\n", ft_strstr(pepita, to_find));
	return (0);
}*/
