/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:19:06 by esordone          #+#    #+#             */
/*   Updated: 2022/07/26 17:57:48 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	if (size == 0)
		return (k);
	i = 0;
	while ((src[i] != '\0') && (i < size -1))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (k);
}
/*
int	main(void)
{
	char			pepa[6];
	char			src[7] = "pastis";
	char			*dest = pepa;
	unsigned int	size;
	unsigned int	p;

	size = 5;
	p = ft_strlcpy(dest, src, size);
	printf("%d %s", p, dest);
	return (0);
}*/
