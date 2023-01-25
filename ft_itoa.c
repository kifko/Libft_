/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:54:09 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/20 13:11:23 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_len(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	if (n == 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	num_size;
	int		temp;

	temp = n;
	num_size = num_len(n);
	str = (char *)malloc(sizeof(char) * num_size + 1);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return ((char *)ft_memmove(str, "-2147483648", 12));
	str[num_size--] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (num_size > 0)
	{
		str[num_size--] = (n % 10) + '0';
		n = n / 10;
	}
	if (temp >= 0)
		str[num_size] = n + '0';
	return (str);
}