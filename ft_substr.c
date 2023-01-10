/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:01:01 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/19 23:09:37 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, size_t start, size_t len)
{
	size_t s_len;

	s_len = ft_strlen(s);
	if(start >= s_len)
	{
		return (NULL);
	}
	if(len > s_len - start)
	{
		len = s_len - start;
	}
	char *sub;
	sub = malloc(len + 1);
	if(sub == NULL)
	{
		return (NULL);
	}
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
