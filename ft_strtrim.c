/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 07:44:12 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/16 09:30:00 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_size;

	if (!s1 || !set)
		return (NULL);
	s1_size = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1_size = ft_strlen(s1);
	while (s1_size && ft_strchr(set, s1[s1_size]))
		s1_size--;
	return (ft_substr((char *)s1, 0, s1_size + 1));
}

/*
Esta está OK, pero tiene demasiadas variables
char *ft_strtrim(char const *s1, char const *set)
{
	char *trimmed_str;
	char const *start;
	char const *end;
	size_t set_len;
	size_t s1_len;
	size_t new_len;
	char *p;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	start = s1;
	while (start < s1 + s1_len && ft_strchr(set, *start) != NULL)
		start++;
	end = s1 + s1_len - 1;
	while (end >= start && ft_strchr(set, *end) != NULL)
		end--;
	new_len = end - start + 1;
	trimmed_str = malloc((new_len + 1) * sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);
	p = trimmed_str;
	while (start <= end)
	{
		*p++ = *start++;
	}
	*p = '\0';
	return (trimmed_str);
}
 	
Esta otra da problemas de memoria
char *ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	char	*p;
	size_t	new_len;

	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
		s1++;

	p = (char *)s1 + ft_strlen(s1) - 1;
	while (p >= s1 && ft_strchr(set, *p) != NULL)
		p--;
	
	new_len = p - (s1 + 1);
	trimmed_str = malloc((new_len + 1) * sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);
	
	p = trimmed_str;
	while (s1 <= p)
		*p++ = *s1++;

	*p = '\0';
	return (trimmed_str);
}
*/
