/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:48:07 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/16 14:13:10 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ##############################################################################
// DESCRIPTION: Copies len bytes from string src to string dst.  
// The two strings may overlap; the copy is always done in a non-destructive manner.
// ##############################################################################
// RETURN VALUES: Returns the original value of dst.
// ##############################################################################

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	char str3[] = "vamosacontarmentiras";
	char dst1[sizeof(str3)];
	ft_memmove(dst1, str3, sizeof(str3));
	printf("\u2705 Original string is: %s\n", str3);
	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	printf("\u2705 And it is located at: %p\n", str3);
	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	printf("\u2705 Moved string is: %s\n", dst1);
	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	printf("\u2705 And it is located at: %p\n", dst1);
	return (0);
}
*/