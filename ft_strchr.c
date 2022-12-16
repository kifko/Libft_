/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:36:54 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/15 11:12:46 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
  The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  
  The terminating null character is considered to be part of the string; therefore if c is `\0', 
  the functions locate the terminating `\0'.
*/
char	*ft_strchr(const char *s, int c)
{
	char *res;

	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			res = (char *)s;
			return (&res[0]);
		}
		s++;
	}
	if (*s == (char)c)
	{
		return &(*(char *)s);
//		printf("Es cierto %p\n", &s[0]);
	}
	return (NULL);
}
/*
int main (void)
{
	char *ptr;
	char *ptr2;

	char str[] = "";
	int needle = '\0';  //110 means 'n' inside ascii table
	ptr2 = strchr(str, needle);
	ptr = ft_strchr(str, needle);
	
	printf("Replica %p\n", ptr);
	printf("Original %p\n", ptr2);
	return (0);
}
*/

/* TODO
- Videos aritmetica de punteros de MyCodeSchool
- Matematicas para programadores
- NESO Academy-
- GitBook (importante)
*/
