/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:27:27 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/12 12:51:11 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
The isprint() function tests for any printing character, including space (` ').  
The value of the argument must be representable as an unsigned char 
or the value of EOF.

RETURN VALUE:
The isprint() function returns zero if the character tests false and 
returns non-zero if the character tests true.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_isprint\033[0m__>>> ");
	printf("\u2705 My function: Its printable! %d\n", ft_isprint('j'));
//	printf("\u2705 Original one: Its printable! %d\n", isprint('j'));
	return (0);
}
*/