/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossi <mrossi@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:02:47 by mrossi            #+#    #+#             */
/*   Updated: 2022/07/24 21:04:05 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	validate_input(int argc, char **argv, char *num, char *new_dict);
void	validate_num(char *num);
void	print_result(char *num, char *new_dict);

int	main(int argc, char **argv)
{
	char	*num;
	char	*new_dict;

	num = argv[1];
	new_dict = argv[1];
	validate_input(argc, argv, num, new_dict);
	validate_num(num);
	print_result(num, new_dict);
	return (0);
}
