/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:46:17 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/18 16:10:13 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ##############################################################################
// DESCRIPTION: Computes the length of the string s.  
// ##############################################################################
// RETURN VALUE: Returns the number of characters 
// that precede the terminating NUL character.
// ##############################################################################

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
/*
int main (void)
{
printf("<<<__\033[36mft_strlen\033[0m___>>> ");
	printf("\u2705 \033[35mMy function: The lenght of the string is:\033[0m %zu\n", ft_strlen("abcdefgh"));
//	printf("\u2705 \033[35mOriginal one: The lenght of the string is:\033[0m %zu\n", strlen("abcdefgh"));
	return (0);
}
*/