/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:37:54 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/31 13:46:34 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
The strnstr() function locates the first occurrence of the
null-terminated string needle in the string haystack,
where not more than len characters are searched.
Characters that appear after a '' character are not searched.
Since the strnstr() function is a FreeBSD specific API,
it should only be used when portability is not a concern.

RETURN VALUE:
If needle is an empty string, haystack is returned;
if needle occurs nowhere in haystack, NULL is returned;
otherwise a pointer to the first character of the first
occurrence of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (j == needle_len - 1)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_strnstr\033[0m__>>> ");
	const char *haystack = "Este es un ejemplo de haystack";
	const char *needle = "ejemplo";
	size_t len = 20;
	char *res = ft_strnstr(haystack, needle, len);
	printf("\u2705 La subcadena '%s' se encuentra en la posición: \
		%d\n", needle, (int)res);
	char *res2 = strnstr(haystack, needle, len);
	printf("\u2705 La subcadena '%s' se encuentra en la posición: \
		%d\n", needle, (int)res2);
	return (0);
}
*/
