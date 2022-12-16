/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:30:04 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/15 11:12:34 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.
  The terminating null character is considered to be part of the string; 
  therefore if c is '\0', the functions locate the terminating '\0'.
*/

char *ft_strchr2(const char *s, int c)
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
	}
	return (NULL);
}

int main (void)
{
	char *ptr1;
	char *ptr2;
	
	char str[] = "aeiouoieabcd";
	int	needle = 111;
	
	ptr1 = strchr(str, needle);
	ptr2 = ft_strchr2(str, needle);

	printf("Original: %p\n", ptr1);
	printf("Replica: %p\n", ptr2);
	printf("Length of str = %lu\n", sizeof(str));
	printf("Needle = %c\nOutput = %s\n", *ptr2, ptr2);

	return (0);
}
