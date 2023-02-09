/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:55:13 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/25 11:09:01 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
// ##############################################################################
// DESCRIPTION: Itera la lista ’lst’ y aplica la función ’f’ al
// contenido de cada nodo. Crea una lista resultante
// de la aplicación correcta y sucesiva de la función
// ’f’ sobre cada nodo. La función ’del’ se utiliza
// para eliminar el contenido de un nodo, si hace
// falta.
// ##############################################################################
// RETURN VALUE: La nueva lista.
// NULL si falla la reserva de memoria.
// ##############################################################################
*/

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*new_content;

	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_elem = ft_lstnew(new_content);
		if (!(new_elem))
		{
			ft_lstclear(&new_lst, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
