/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossi <mrossi@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:09:15 by mrossi            #+#    #+#             */
/*   Updated: 2022/07/24 21:46:19 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	descomponer(char *parts, char *num);
void	open_dict(char *new_dict, char *dict);
void	ft_lectura(char *part, char *dict);

void	print_result(char *num, char *new_dict)
{
	char	*dict;
	int		i;

	dict = (char *) malloc(700);
	open_dict(dict, new_dict);
	i = 0;
	while (num[i] != '\0')
	{
		ft_lectura(&num[i], dict);
		i++;
	}
	free(dict);
}
