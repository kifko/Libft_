/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:43:48 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/30 11:34:25 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
// ##############################################################################
// DESCRIPTION:
// The isalnum() function tests for any character for which isalpha(3) or 
// isdigit(3) is true.  
// The value of the argument must be representable as an unsigned char 
// or the value of EOF.
// ##############################################################################
// RETURN VALUE:
// The isalnum() function returns zero if the character tests false and 
// returns non-zero if the character tests true.
// ##############################################################################
*/

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

/*
int main (void)
{
	printf("<<<__\033[36mft_isalnum\033[0m__>>> ");
	printf("\u2705 My function: Its alphanumeric! %d\n", ft_isalnum('h'));
//	printf("\u2705 Original one: Its alphanumeric! %d\n", isalnum('h'));
	return (0);
}
*/