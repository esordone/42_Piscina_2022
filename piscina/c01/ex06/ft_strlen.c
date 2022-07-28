/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:19:07 by esordone          #+#    #+#             */
/*   Updated: 2022/07/22 11:27:24 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int	num;

	str = "pernil";
	num = ft_strlen(str);
	printf("%d", num);
	return (0);
}
*/
int	ft_strlen(char *str)
{
	int	conta;

	conta = 0;
	while (str[conta] != '\0')
	{
		conta++;
	}
	return (conta);
}
