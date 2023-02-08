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

// ##############################################################################
// DESCRIPTION: Utilizando malloc(3), genera una string que
// represente el valor entero recibido como argumento.
// Los números negativos tienen que gestionarse.
// ##############################################################################
// The ft_itoa function takes in an integer as an argument and returns a pointer 
// to a string representation of that integer, created dynamically on the heap.
// ##############################################################################
// RETURN VALUE: La string que represente el número.
// NULL si falla la reserva de memoria.
// ##############################################################################

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

/*
int main (void)
{
	printf("<<<__\033[36mft_itoa\033[0m_____>>> ");
	int a2 = 1234;
	printf("Result is: %s\n", ft_itoa(a2));
	return (0);
}
*/