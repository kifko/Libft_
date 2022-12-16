/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:48:07 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/16 13:35:21 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memmove() function copies len bytes from string src to string dst.  
	The two strings may overlap; the copy is always done in a non-destructive manner.
*/

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
	char my_str[] = "abcdefgh";
	char *str[];

	printf("%s\n", ft_memmove(str, my_str, 4);
//	memmove(str + 1, str, 4);

//	printf("%s\n%s\n", my_str, str);
	return (0);
}
*/
