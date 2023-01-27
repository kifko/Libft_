/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:37:54 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/27 12:44:34 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return (char *)haystack;
	if (len < needle_len)
		return (NULL);
	while (len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}


/*

V 1.0
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (j == needle_len - 1)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

V 0.0
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
*/
