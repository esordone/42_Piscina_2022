/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:47:07 by esordone          #+#    #+#             */
/*   Updated: 2022/07/27 17:21:50 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
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
