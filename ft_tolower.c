/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:23:27 by festeve-          #+#    #+#             */
/*   Updated: 2022/11/30 18:24:37 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		return(c + 32);
	return(c);
}

int	main()
{
	int i;

	i = 'G';
	printf("%c", ft_tolower(i));
}