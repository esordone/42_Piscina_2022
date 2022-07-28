/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:33:59 by esordone          #+#    #+#             */
/*   Updated: 2022/07/27 16:46:29 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char 	lola[] = "a";
	char	jacinta[] = "A";
	char	*s1;
	char	*s2;
	int		r;

	s1 = lola;
	s2 = jacinta;
	r = ft_strcmp(s1, s2);
	printf("%d", r);
	return (0);
}*/
