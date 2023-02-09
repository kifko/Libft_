/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 07:44:12 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/18 16:10:11 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de malloc(3)

RETURN VALUE: La string recortada. NULL si falla la reserva de memoria.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_size;

	if (!s1 || !set)
		return (NULL);
	s1_size = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1_size = ft_strlen(s1);
	while (s1_size && ft_strchr(set, s1[s1_size]))
		s1_size--;
	return (ft_substr((char *)s1, 0, s1_size + 1));
}

/*
int main (void)
{
	printf("<<<__\033[36mft_strtrim\033[0m__>>> ");
	char *s3 = "___holamundo___";
	char s4 = '_';
	printf("\u2705 Trimmed string is: %s\n", ft_strtrim(s3, &s4));
	return (0);
}
*/