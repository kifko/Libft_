/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:23:27 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/16 07:43:15 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_tolower\033[0m__>>> ");
	printf("\u2705 The result is: %c\n", ft_tolower('E'));
	return (0);
}
*/
