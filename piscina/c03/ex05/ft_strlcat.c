/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:15:06 by esordone          #+#    #+#             */
/*   Updated: 2022/07/28 14:15:17 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	conta(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	i = conta(dest);
	if (size == 0)
		return (conta(src));
	k = 0;
	while (src[k] != '\0' && i < size)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (conta(dest) + conta(src));
}
/*
int	main(void)
{
	char pascuala[] = "flauta travessera";
	char enriqueta[] = "mico";
	unsigned int 	p;
	unsigned int	size;

	p = 22;
	size = ft_strlcat(pascuala, enriqueta, p);
	printf("%d\n", size);
	printf("%s\n%s\n", pascuala, enriqueta);
	return (0);
}*/
