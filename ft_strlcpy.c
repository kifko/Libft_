/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:32:54 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/12 13:45:33 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char *d;
	char *l;
	const char *s;

	d = dst;
	l = dst + dstsize;
	s = src;
	while (*s != '\0' && d < l)
	{
		*d++ = *s++;
	}
	if (d < l)
	{
		*d = 0;
	}
	else if ( dstsize > 0)
	{
		d[-1] = 0;
	}
	while (*s != '\0')
	{
		s++;
	}
	return (s - src);
}
/*
void test(int size)
{
	char string[] = "Hello there, Moon";
	char buffer[18];
	int r;

	r = ft_strlcpy(buffer, string, size);

	printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
}

int main (void)
{
	test (18);
	test (9);
	test (1);
	test (0);

	return (0);
}
*/
