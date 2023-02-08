/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:15:26 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/16 14:18:23 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ##############################################################################
// DESCRIPTION: Fills the first n bytes of the memory area pointed to by s 
// with the constant byte c, converted to unsigned.
// ##############################################################################
// RETURN VALUE: Returns a pointer to the memory area s.
// ##############################################################################

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*i;
	size_t			x;

	i = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		i[x] = c;
		x++;
	}
	return (s);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_memset\033[0m___>>> ");
	char str1[84] = "ahoraquevamosdespacio";
	printf("\u2705 My function: The result is: %p\n", ft_memset(str1, '.', 8));
//	printf("\u2705 Original one: The result is: %p\n", memset(str1, '.', 8));
	return (0);
}
*/