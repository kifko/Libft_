/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:01:21 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/12 15:23:27 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ##############################################################################
// DESCRIPTION: Compares byte string s1 against byte string s2.  
// Both strings are assumed to be n bytes long.
// ##############################################################################
// RETURN VALUES: Returns zero if the two strings are identical, otherwise 
// returns the difference between the first two differing bytes (treated as 
// unsigned char values, so that `\200' is greater than `\0', for example).  
// Zero-length strings are always identical.  
// This behavior is not required by C and portable code should only depend 
// on the sign of the returned value.
// ##############################################################################

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	unsigned int	i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (s1 == s2 || n == 0)
		return (0);
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_memcmp\033[0m___>>> \n");
	return (0);
}
*/