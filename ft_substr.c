/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:01:01 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/11 13:59:19 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ##############################################################################
// DESCRIPTION:
// Returns the substring of the given string at the given start position 
// with the given length (or smaller if the length of the original string 
// is less than start + length, or length is bigger than MAXSTRINGLEN).
// ##############################################################################
// RETURN VALUE: Returns a substring
// ##############################################################################

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	str_len;

	if (!s)
	{
		return (NULL);
	}
	str_len = ft_strlen(s);
	if (start > str_len)
	{
		return (ft_strdup(""));
	}
	if (str_len - start < len)
	{
		len = str_len - start;
	}
	res = malloc(len + 1);
	if (!res)
	{
		return (NULL);
	}
	ft_memcpy(res, s + start, len);
	res[len] = '\0';
	return (res);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_substr\033[0m___>>> ");
	char *original_2 = "hello, world!";
	char *substring = ft_substr(original_2, 5, 3);
	printf("\u2705 Substring is: %s\n", substring);
	return (0);
}
*/