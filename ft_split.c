/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:30:27 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/16 18:33:14 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t sub_str_size(char const *str, char c)
{
	size_t	i;
	size_t	lenght;

	i = 0;
	lenght = 0;
	while (str[i])
	{
		if (str[i] != c)
			lenght++;
		while (str[i] && str[i] != c)
			i++;
		if (str[i])
			i++;
	}
	return (lenght);
}

char *ft_sub_str(char const *s, char c, size_t j)
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

char **ft_split(char const *s, char c)
{
	char	**bi_dim_array;
	size_t	sub_str;
	size_t	i;

	if (!s)
		return (NULL);
	sub_str = sub_str_size(s, c);
	if (c == '\0' && ft_strlen(s) > 0)
		sub_str = 1;
	bi_dim_array = (char **)ft_calloc(sub_str + 1, sizeof(char *));
	if (bi_dim_array == NULL)
		return (NULL);
	i = 0;
	while (i < sub_str)
	{
		bi_dim_array[i] = ft_sub_str(s, c, i);
		if (bi_dim_array[i] == NULL)
			return (NULL);
		i++;
	}
	bi_dim_array[i] = NULL;
	return (bi_dim_array);
}

