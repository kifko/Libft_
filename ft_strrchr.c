/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:45:44 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/08 18:10:15 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	needle;
	int		i;

	ptr = (char *)s;
	needle = c;
	i = ft_strlen(s);
	if (ptr[i] == needle)
		return (&ptr[i]);
	while (i != 0)
	{
		if ((ptr[i - 1]) == needle)
			return (&ptr[i -1]);
		i--;
	}
	return (NULL);
}
