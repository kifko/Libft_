/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:37:54 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/12 15:24:00 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*hs;
	char			*n;

	i = 0;
	j = 0;
	hs = (char *)haystack;
	n = (char *)needle;
	if (n[i] == '\0')
		return (hs);
	while (hs[i] != '\0' && i < len)
	{
		while (hs[i + j] == n[j] && (i + j) < len)
		{
			if (n[j + 1] == '\0')
				return (&hs[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
