/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:00:19 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/18 15:19:56 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Description:
//	str_join concatenates all the strings/character arrays passed to it. If
//	'delim' is not NULL then after every string, the 'delim' string is concatenated.
//	It allocates a new character array whose size is equal to the sum of the
//	lengths of all strings passed to it plus 1 (extra 1 for terminating null byte).
//	It then concatenates all the strings passed to it separated by 'delim' string
//	into the newly allocated character array and then returns the pointer to
//	the newly allocated character array. If memory allocation fails then NULL is returned.
//
//	It is the responsibility of the caller to free the allocated memory.

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*res;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = malloc(s1_len + s2_len + 1);
	if (!res)
		return (NULL);
	while (*s1)
		*res++ = *s1++;
	while (*s2)
		*res++ = *s2++;
	*res = '\0';
	return (res - s1_len - s2_len);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_strjoin\033[0m__>>> ");
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *result_2 = ft_strjoin(s1, s2);
	printf("\u2705 %s\n", result_2);
	free(result_2);
	return (0);
}
*/