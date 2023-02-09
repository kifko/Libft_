/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:36:54 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/10 12:16:22 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION: The malloc(), calloc(), valloc(),
realloc(), and reallocf() functions allocate memory.
The allocated memory is aligned such that it can be used for
any data type, including AltiVec- and SSE-related types.
The aligned_alloc() function allocates memory
with the requested alignment.
The free() function frees allocations that were
created via the preceding allocation functions.
The calloc() function contiguously allocates enough space
for count objects that are size bytes of memory each
and returns a pointer to the allocated memory.
The allocated memory is filled with bytes of value zero.

RETURN VALUE: If successful, calloc(), malloc(), realloc(),
reallocf(), valloc(), and aligned_alloc() functions 
return a pointer to allocated memory.
If there is an error, 
they return a NULL pointer and set errno to ENOMEM.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/*
int main(void)
{
	int *array;
	int i;
	int n = 6;

	array = (int*) ft_calloc(n, sizeof(int));
	if (array == NULL)
	{
		printf("Error allocating memory\n");
		return (1);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	free (array);
	return (0);
}
*/
/*
int main (void)
{
	printf("<<<__\033[36mft_calloc\033[0m___>>> ");
	int n3 = 10;
	int *array = ft_calloc(n3, sizeof(int));
	if(array == NULL)
	{
		printf("Falla la reserva de memoria\n");
		return (1);
	}
	printf("\u2705 thisisacallocoverwritentext\n", array);
	free(array);
	return (0);
}
*/