/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:22:38 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/23 18:23:54 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
// ##############################################################################
// DESCRIPTION: Envía el carácter ’c’ al file descriptor especificado.
// ##############################################################################
// RETURN VALUE: Nada
// ##############################################################################
*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
