/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:15:26 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/01 17:55:44 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

int main(void)
{
	char str[] = "Holaquehaces";

	printf("The result is: %s", (char *)ft_bzero(str, 2)); 
	return (0);
}