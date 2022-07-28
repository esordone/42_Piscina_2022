/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:41:47 by esordone          #+#    #+#             */
/*   Updated: 2022/07/26 19:49:45 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, **argv)
{
	char *num;
	char *n;

	validate_input(argc, argv, num, n);
	num = argv[1];
	n = argv[1];
	return (0);
}
