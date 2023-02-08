/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:41:23 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/19 19:15:17 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_toupper\033[0m__>>> ");
	printf("\u2705 The result is: %c\n", ft_toupper('e'));
	return (0);
}
*/
