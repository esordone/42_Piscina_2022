/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossi <mrossi@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:48:04 by mrossi            #+#    #+#             */
/*   Updated: 2022/07/24 21:06:13 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_error(void)
{
	char	*msj;
	int		i;

	i = 0;
	msj = "Error\n";
	while (msj[i] != '\0')
	{
		write(1, &msj[i], 1);
		i++;
	}
}

void	validate_input(int argc, char **argv, char *num, char *newDict)
{
	if (argc == 2)
	{
		num = argv[1];
		newDict = "\0";
	}
	else if (argc == 3)
	{
		num = argv[2];
		newDict = argv[1];
	}
	else
	{
		print_error();
	}
}

int	validate_num(char *num)
{
	int	i;
	int	bool;

	i = 0;
	while (num[i] != '\0')
	{
		if (num[i] > '9' || num[i] < '0')
		{
			print_error();
			bool = 0;
			break ;
		}
		else
		{
			bool = 1;
		}
		i++;
	}
	return (bool);
}
