/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:36:54 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/08 18:27:14 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	needle;
	int		i;

	ptr = (char *)s;
	needle = c;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	if (ptr[i] == c)
		return (ptr + i);
	return (NULL);
}
