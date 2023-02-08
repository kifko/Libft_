/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:59:03 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/12 14:43:23 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ##############################################################################
// DESCRIPTION: Copies n bytes from memory area src to memory area dst.
// If dst and src overlap, behavior is undefined.  
// Applications in which dst and src might overlap should use memmove(3) instead.
// ##############################################################################
// RETURN VALUE: The memcpy() function returns a pointer to dest.
// ##############################################################################

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (n == 0 || src == dst)
		return (d);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_memcpy\033[0m___>>> ");
	char src[] = "tralara";
	char dst[20];
	printf("\u2705 The result is: %p\n", ft_memcpy(dst, src, 3));
	return (0);
}
*/
