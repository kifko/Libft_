/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:15:26 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/07 22:51:33 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	while (n && i)
	{
		*i = c;
		i++;
		n--;
	}
	return (s);
}
/*
void *ft_memset(void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = (unsigned char)c;
	 	i++;	 
	}
	return (s);
}

int main(void)
{
	char str[] = "www.Cualquiercosa.com";

	printf("Bfor memset: %s\n", (char *)ft_memset(str, ' ', 0));
	printf("Aftr memset: %s\n", (char *)ft_memset(str, '.', 4));
	return (0);
}
*/
