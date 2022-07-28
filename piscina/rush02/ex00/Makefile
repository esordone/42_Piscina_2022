# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esordone <esordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 14:09:22 by esordone          #+#    #+#              #
#    Updated: 2022/07/24 20:41:35 by esordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = rush-02

FOLDER = main.c validate_input.c descomponer.c open_dict.c ft_lectura.c print_result.c

INCLUDE = ${SRC: .c = .o}

GCCFLAGS = -Wall -Werror -Wextra

${FILE} : ${INCLUDE}
	gcc -o ${FILE} ${FOLDER} -Includes ${GCCFLAGS}

fclean:
	rm -f ${FILE}

clean:
	rm -f *.o
