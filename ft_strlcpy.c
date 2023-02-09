/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:32:54 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/16 14:21:02 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
The strlcpy() and strlcat() functions copy and concatenate strings respectively.
They are designed to be safer, more consistent, and less error prone replacements
for strncpy(3) and strncat(3).
Unlike those functions, strlcpy() and strlcat() take the full size of the buffer
(not just the length) and guarantee to NUL-terminate the result
(as long as size is larger than 0 or, in the case of strlcat(),
as long as there is at least one byte free in dst).
Note that a byte for the NUL should be included in size.
Also note that strlcpy() and strlcat() only operate on true ''C'' strings.
This means that for strlcpy() src must be NUL-terminated and for strlcat()
both src and dst must be NUL-terminated.

RETURN VALUE:
The strlcpy() and strlcat() functions return the total length of the string
they tried to create.
For strlcpy() that means the length of src.
For strlcat() that means the initial length of dst plus the length of src.
While this may seem somewhat confusing, it was done to make truncation detection
simple.

Note, however, that if strlcat() traverses size characters without finding a NUL,
the length of the string is considered to be size and the destination string
will not be NUL-terminated (since there was no space for the NUL).
This keeps strlcat() from running off the end of a string.
In practice this should not happen (as it means that either size is incorrect
or that dst is not a proper ''C'' string).
The check exists to prevent potential security problems in incorrect code.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

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
int main (void)
{
	printf("<<<__\033[36mft_strlcpy\033[0m__>>> ");
	char src1[] = "tralara";
	char dst2[8];
	size_t n = 8;
	size_t cpy = ft_strlcpy(dst2, src1, n);
	printf("\u2705 Its been copied %zu characters from source string \
		to destiny string. \n", cpy);
	printf("<<<__\033[36mft_strlcpy\033[0m__>>> ");
	printf("\u2705 Destiny string is: %s\n", dst2);
	return (0);
}
*/
