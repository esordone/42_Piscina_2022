/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   escribe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:12:41 by esordone          #+#    #+#             */
/*   Updated: 2022/07/17 20:15:08 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	condicions(int cadena[], int *pt1, int x, int y, int argc);

void	escribe(char c);
{
	write(1, &c, 1);
}
