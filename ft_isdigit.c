/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:50:06 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/07 22:50:22 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
The isdigit() function tests for a decimal digit character.
The isnumber() function behaves similarly to isdigit(), 
but may recognize additional characters, depending on the current locale setting.
The value of the argument must be representable as an unsigned char 
or the value of EOF.

RETURN VALUE:
 The isdigit() and isnumber() functions return zero if the character tests 
false and return non-zero if the character tests true.
*/

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_isdigit\033[0m__>>> ");
	printf("\u2705 My function: Its digit! %d\n", ft_isdigit('4'));
//	printf("\u2705 Original one: Its digit! %d\n", isdigit('4'))
	return (0);
}
*/