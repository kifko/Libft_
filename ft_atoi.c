/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:47:46 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/18 18:35:12 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ##############################################################################
// DESCRIPTION: 
// Converts the initial portion of the string pointed to by str to int representation.
// ##############################################################################

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	final_nbr;

	i = 0;
	sign = 1;
	final_nbr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final_nbr = final_nbr * 10 + str[i] - '0';
		i++;
	}
	if (final_nbr > 2147483647 && sign == 1)
		return (-1);
	if (final_nbr > 2147483648 && sign == -1)
		return (0);
	return (final_nbr * sign);
}

/*
int main (void)
{
	printf("<<<__\033[36mft_atoi\033[0m_____>>> ");
	printf("%d\n", ft_atoi("2147483651"));
	printf("<<<__\033[36matoi\033[0m_____>>> ");
	printf("%d\n", atoi("2147483651"));
	return (0);
}
*/