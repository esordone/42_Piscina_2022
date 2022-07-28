/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:35:13 by esordone          #+#    #+#             */
/*   Updated: 2022/07/28 11:44:14 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	w;

	i = 0;
	if (nb == 0)
	{
		return (0);
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	w = 0;
	while (src[w] != '\0' && i < nb)
	{
		dest[i] = src[w];
		w++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "somni";
	char	src[] = " bonic i suau";
	unsigned int	nb;

	nb = 13;
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}*/
