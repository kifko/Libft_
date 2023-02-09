/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:45:44 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/19 14:17:34 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION: The strrchr() function returns a pointer to the
LAST occurrence of the character c in the string s.
The terminating NUL character is considered part of the string.
If c is ‘\0’, strchr() locates the terminating ‘\0’.
The rindex() function is an old synonym for strrchr().

RETURN VALUE: The strrchr() functions return a pointer to
the matched character or NULL if the character is not found.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	needle;
	size_t	i;

	ptr = (char *)s;
	needle = c;
	i = ft_strlen(s);
	if (ptr[i] == needle)
		return (&ptr[i]);
	while (i != 0)
	{
		if ((ptr[i - 1]) == needle)
			return (&ptr[i -1]);
		i--;
	}
	return (NULL);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_strrchr\033[0m__>>> ");
	char str5[] = "correnlasliebres";
	char ch2 = 'e';
	char *ptr2 = ft_strrchr(str5, ch2);
	if(ptr2 != NULL)
	{
		printf("\u2705 It was found the character '%c' at the position \
			%d from string '%s'\n", ch2, (int)(ptr2 - str5), str5);
	}
	else
	{
		printf("It wasnt found the character '%c' at string '%s'\n", ch2, str5);
	}
	return (0);
}
*/
