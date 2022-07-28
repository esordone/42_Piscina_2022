/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:33:10 by esordone          #+#    #+#             */
/*   Updated: 2022/07/24 21:25:11 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char	*open_dict(char *dict, char *new_dict)
{
	int		fd;
	ssize_t	nr_bytes;
	char	*path;

	if (new_dict[1] == '\0')
		path = "./numbers.dict";
	else
		path = new_dict;
	dict = (char *) malloc (700);
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
	}
	else
	{
		nr_bytes = read(fd, dict, 700);
		close(fd);
		if (nr_bytes == 0)
		{
			write(1, "Dict Error\n", 11);
		}
	}
	return (dict);
}
