/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:15:26 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/15 19:27:54 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memset() function writes len bytes of value c (converted to an unsigned char) to the string b. 
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char *str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
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
	printf("Aftr memset: %s\n", (char *)ft_memset(str, '.', 5));
	return (0);
}
*/
