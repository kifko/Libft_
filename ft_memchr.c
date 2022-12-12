/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:22:13 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/12 15:23:35 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	needle;
	unsigned int	i;

	ptr = (unsigned char *)s;
	needle = c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == needle)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
