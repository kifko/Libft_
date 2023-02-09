/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:36:54 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/16 14:20:05 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
// DESCRIPTION: 
// The strchr() function returns a pointer to the FIRST occurrence 
// of the character c (converted to a char) in the string s.
// The terminating NUL character is considered part of the string. 
// If c is ‘\0’, strchr() locates the terminating ‘\0’.
// The index() function is an old synonym for strchr().
// ##############################################################################
// RETURN VALUE: 
// The strchr() function returns a pointer to the located character or NULL 
// if the character does not appear in the string.
*/

char	*ft_strchr(const char *s, int c)
{
	char	*res;

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
		return (&(*(char *)s));
	}
	return (NULL);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_strchr\033[0m___>>> ");
	char str4[] = "porelmar";
	char ch = 'r';
	char *ptr = ft_strchr(str4, ch);
	if(ptr != NULL) 
	{
		printf("\u2705 It was found the character '%c' \
		at the position %d from string '%s'\n", ch, (int)(ptr - str4), str4);
	}
	else
	{
		printf("It wasnt found the character '%c' at string '%s'\n", ch, str4);
	}
	return (0);
}
*/