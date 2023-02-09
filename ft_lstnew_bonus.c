/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:37:23 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/23 19:59:14 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
// ##############################################################################
// DESCRIPTION: Crea un nuevo nodo utilizando malloc(3). La
// variable miembro ’content’ se inicializa con el
// contenido del parámetro ’content’. La variable
// ’next’, con NULL.
// ##############################################################################
// RETURN VALUE: El nuevo nodo.
// ##############################################################################
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!(new_list))
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}

/*
int main (void)
{
	int a3 = 123;
	new_list = (t_list *)malloc(sizeof(t_list));
	new_list->content = a3;
	new_list->next = NULL;
	printf ("%d",(int)new_list->content);
	return (0);
}
*/
