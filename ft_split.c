/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:30:27 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/24 14:16:16 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
// ##############################################################################
// DESCRIPTION: Reserva (utilizando malloc(3)) un array de strings
// resultante de separar la string ’s’ en substrings
// utilizando el caracter ’c’ como delimitador. 
// El array debe terminar con un puntero NULL.
// ##############################################################################
// RETURN VALUE: El array de nuevas strings resulatente de la separación.
// NULL si falla la reserva de memoria.
// #############################################################################
*/

size_t	ft_sub_str_size(char const *str, char c)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		if (*str != c)
		{
			len++;
			while (*str != c && *str)
				str++;
		}
		else
			str++;
	}
	return (len);
}

char	*ft_sub_str(char const *s, char c, size_t j)
{
	size_t	i;
	size_t	count;
	char	*str;

	str = NULL;
	i = -1;
	count = -1;
	while (++i < (size_t)ft_strlen(s) && s[i])
	{
		if (s[i] != c)
			count++;
		if (count == j && s[i] != c)
		{
			count = i;
			while (s[count] && s[count] != c)
				count++;
			str = ft_substr(s, i, count - i);
			if (!str)
				return (NULL);
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	sub_str_size;
	char	**bi_dim_array;

	i = 0;
	sub_str_size = ft_sub_str_size(s, c);
	bi_dim_array = (char **)ft_calloc(sub_str_size + 1, sizeof(char *));
	if (!s || !bi_dim_array)
		return (NULL);
	if (c == '\0' && ft_strlen(s) > 0)
		sub_str_size = 1;
	while (i < sub_str_size)
	{
		bi_dim_array[i] = ft_sub_str(s, c, i);
		if (!bi_dim_array[i])
		{
			while (i--)
				free (bi_dim_array[i]);
			free (bi_dim_array);
			return (NULL);
		}
		i++;
	}
	bi_dim_array[i] = NULL;
	return (bi_dim_array);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_split\033[0m____>>> ");
	char *a = "asdq weer trty gfh";
	char **result_3 = ft_split(a, ' ');
	int	i = 0;
	while (result_3[i])
	{
		printf("\u2705 Splited string is: %s\n", result_3[i]);
		i++;
	}
	free(result_3);
	return (0);
}
*/
