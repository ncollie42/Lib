/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 15:18:05 by ncollie           #+#    #+#             */
/*   Updated: 2019/08/12 11:44:51 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nc_list.h"

void	lstdel(t_list **head, void (*del)(void *))
{
	t_list *tmp;
	t_list *last;
	
	tmp = *head;
	while (tmp)
	{
		del(tmp->content);
		last = tmp;
		tmp = tmp->next;
		free(last);
		last = NULL;
	}
	free(head);
	head = NULL;
}
