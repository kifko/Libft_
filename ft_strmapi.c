/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:03:01 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/23 18:19:21 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION: A cada carácter de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. 
Genera una nueva string con el resultado del uso sucesivo de ’f’.
####################################################################
RETURN VALUE: La string creada tras el correcto uso de ’f’ sobre cada carácter.
NULL si falla la reserva de memoria.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
