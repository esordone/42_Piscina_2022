/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condicions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:54:49 by esordone          #+#    #+#             */
/*   Updated: 2022/07/17 21:06:43 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	escribe(char c);

int	condicions(int cadena[], int *pt1, int x, int y, int argc)
{
	x = 4;
	y = 4;
	cadena[0] = 1;
	cadena[1] = 2;
	cadena[2] = 3;
	cadena[3] = 4;
	*pt1 = &cadena[];

	/*condicion principal: los parametros introducidos deben ser 4 numeros(no letras ni simbolos. falta pasar el string de chars a numeros en cada lado (16 en total), y deben ser entre 1 y 4*. La suma de los numeros de los lados no puede ser menos de 3 y mas de 5*/
	if (argv[1][0] >= 1 && argv[1][0] <= 4)
	while 
	/*falta decir que sea en la posicion interior en todos*/
	/*no puede dejar espacios vacios, siempre deben estar las filas y columnas llenas con numeros del 1 al 4 sin que se repitan entre ellos)*/
	/*si fuera hay un 1, el adyacente es 4)*/
	if (argc[0] == cadena[0])
	{
		escribe(4);
	}
	/*si fuera hay un 4, las fila o columna que le pertoca es 1,2,3,4*/
	else if (argc[0] == cadena[3])
	{
		/*falta que vaya en horizontal o en vertical*/
		escribe(1, 2, 3, 4);
	}
	/*si fuera hay un 3, el adyacente puede ser 1 o 2*/
	else if (argc[0] == cadena[2])
	{
		/*falta especificar condicion 3*/
		escribe( 1 || 2);
	}
	else if (argc[0] == cadena[1])
	{
		/*falta especificar condicion 2*/
		escribe(1 || 2 || 3);
	}
	/*cuando cadena es 4 (cadena[3]) y argc es 3 escribe 2,3,4 de forma creciente*/
	/*
	else
	{
		escribe(4);
	}

