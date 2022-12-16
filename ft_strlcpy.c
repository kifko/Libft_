/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:32:54 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/16 13:25:34 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as snprintf(3).  
	They are designed to be safer, more consistent, and less error prone replacements for the easily misused functions strncpy(3) and strncat(3).

    strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in dstsize.

    strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.

    If the src and dst strings overlap, the behavior is undefined.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcsize;
	size_t i;

	srcsize = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*
size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t src_len = ft_strlen(src);
	size_t i = 0;

	while (i < src_len && i < len - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < len)
	{
		dst[i] = '\0';
	}
	return (src_len);
}

void test(int size)
{
	char string[] = "Hello there, Moon";
	char buffer[18];
	int r;

	r = ft_strlcpy(buffer, string, size);

	printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
}

int main (void)
{
	test (18);
	test (9);
	test (1);
	test (0);

	return (0);
}
*/
