# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esordone <esordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 19:39:50 by esordone          #+#    #+#              #
#    Updated: 2022/07/26 19:41:11 by esordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = bsq

FOLDER = main.c open.c read.c

INCLUDE = ${SRC: .c = .o}

GCCFLAGS = -Wall -Werror -Wextra

${FILE} : ${INCLUDE}
	gcc -o ${FILE} ${FOLDER} -Includes ${GCCFLAGS}

fclean:
	rm -f ${FILE}

clean:
	rm -f *.o
