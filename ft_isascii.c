/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:53:32 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/30 11:41:00 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
// ##############################################################################
// DESCRIPTION:  
// The isascii() function tests for an ASCII character, 
// which is any character between 0 and octal 0177 inclusive.
// ##############################################################################
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_isascii\033[0m__>>> ");
	printf("\u2705 My function: Its ascii! %d\n", ft_isascii('f'));
//	printf("\u2705 Original one: Its ascii! %d\n", isascii('f'));
	return (0);
}
*/