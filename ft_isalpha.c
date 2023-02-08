/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:23:46 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/30 11:37:18 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ##############################################################################
// DESCRIPTION:
// The isalpha() function tests for any character for which isupper(3) or islower(3) 
// is true.  The value of the argument must be representable as an
// unsigned char or the value of EOF.
// ##############################################################################
// RETURN VALUE:
// The isalpha() function returns zero if the character tests false and 
// returns non-zero if the character tests true.
// ##############################################################################

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

/*
int main (void)
{
	printf("<<<__\033[36mft_isalpha\033[0m__>>> ");
	printf("\u2705 My function is: %d\n", ft_isalpha('a'));
//	printf("\u2705 Original one: %d\n", isalpha('b'));
	return (0);
}
*/