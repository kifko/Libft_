/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:19:02 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/15 18:42:41 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
	The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as snprintf(3).  
	They are designed to be safer, more consistent, and less error prone replacements for the easily misused functions strncpy(3) and strncat(3).

	strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  
	Note that room for the NUL should be included in dstsize.

	strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.

	strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.  
	It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize 
	(in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).

	If the src and dst strings overlap, the behavior is undefined.

	RETURN VALUES
	Besides quibbles over the return type (size_t versus int) and signal handler safety (snprintf(3) is not entirely safe on some systems), 
	the following two are equivalent:

           n = strlcpy(dst, src, len);
           n = snprintf(dst, len, "%s", src);

	Like snprintf(3), the strlcpy() and strlcat() functions return the total length of the string they tried to create.  
	For strlcpy() that means the length of src.  For strlcat() that means the initial length of dst plus the length of src.

	If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_b;
	size_t src_b;

	dst_b = ft_strlen(dst) + ft_strlen(src);
	src_b = dstsize;
	while (*dst != 0 && dstsize > 0)
	{
		dst++;
		dstsize--;
	}
	if (dstsize == 0)
		return (ft_strlen(src) + src_b);
	while (*src != 0 && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (dst_b);
	return (0);
}

/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	res;

	dstlen = ft_strlen(dst) - dst;
	srclen = ft_strlen(src) - src;
	res = dstlen + srclen;
	if (dstlen < dstsize)
	{
		dst += dstlen;
		dstsize -= dstlen;
		if (dstsize <= srclen)
		{
			srclen = dstsize - 1; 
		}
		dst[srclen] = '\0';
		ft_memcpy(dst, src, srclen);
	}
	return (res);
}

int main(void)
{
	
}
*/
