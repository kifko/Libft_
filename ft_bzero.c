/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:15:26 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/07 22:04:17 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
Writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*i;

	i = s;
	while (n-- > 0)
		i[n] = '\0';
}

/*
int main (void)
{
	printf("<<<__\033[36mft_bzero\033[0m____>>> ");
	char	str2[25] = "vamosacontarmentiras";
	size_t	len = strlen(str2);
	printf("\u2705 Before ft_bzero: %s\n", str2);
	printf("<<<__\033[36mbzero\033[0m_______>>> ");
	printf("\u2705 before bzero: %s\n", str2);
	ft_bzero(str2, len);
	printf("<<<__\033[36mft_bzero\033[0m____>>> ");
	printf("\u2705 After ft_bzero: %s\n", str2);
	bzero(str2, len);
	printf("<<<__\033[36mbzero\033[0m_______>>> ");
	printf("\u2705 After bzero: %s\n", str2);

	return (0);
}
*/
