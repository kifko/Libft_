/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:36:54 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/11 22:27:05 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
The strdup() function allocates sufficient memory for a copy of the string s1, 
does the copy, and returns a pointer to it.  
The pointer may subsequently be used as an argument to the function free(3).
If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s) + 1;
	dup = malloc(len);
	if (dup == NULL)
		return (NULL);
	return (ft_memcpy(dup, s, len));
}

/*
int main (void)
{
	printf("<<<__\033[36mft_strdup\033[0m___>>> ");
	const char *original_1 = "Hello, world!";
	char *duplicate_1 = ft_strdup(original_1);
	if(duplicate_1 == NULL)
	{
		printf("\u274c Error: ft_strdup failed\n");
		return (1);
	}
	else
	{
		printf("\u2705 Original string: %s\n", original_1);
		printf("<<<__\033[36mft_strdup\033[0m___>>> ");
		printf("\u2705 Duplicate string: %s\n", duplicate_1);
		free(duplicate_1);
	}
	return (0);
}
*/