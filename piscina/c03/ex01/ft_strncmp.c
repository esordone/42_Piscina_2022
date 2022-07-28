/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:47:07 by esordone          #+#    #+#             */
/*   Updated: 2022/07/28 19:04:01 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char 	marisa[] = "aaaa";
	char	enriqueta[] = "AAAA";
	char	*s1;
	char	*s2;
	unsigned int		n;

	s1 = marisa;
	s2 = enriqueta;
	n = 4;
	printf("%d", ft_strncmp (s1, s2, n));
	return (0);
}*/
