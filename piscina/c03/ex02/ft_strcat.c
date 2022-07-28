/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:22:25 by esordone          #+#    #+#             */
/*   Updated: 2022/07/28 11:34:39 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	f;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	f = 0;
	while (src[f] != '\0')
	{
		dest[i] = src[f];
		f++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[] = "pa";
	char src[] = " amb tomaca" ;

	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
