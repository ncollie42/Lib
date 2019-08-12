/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstaddsorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 15:30:27 by ncollie           #+#    #+#             */
/*   Updated: 2019/08/11 19:04:26 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nc_list.h"

void	insertBefore(t_list *previous, t_list *curent, t_list *new)
{
	new->next = curent;
	new->previous = previous;
	if (previous)
		previous->next = new;
	curent->previous = new;
}

void	insertAfter(t_list *previous, t_list *new)
{
	new->next = NULL;
	new->previous = previous;
	previous->next = new;
}

void	lstAddSorted(t_list **head, t_list *new, int (*check)(void *, void *))
{
	t_list *curent;
	t_list *previous;

	if (!*head)
	{
		*head = new;
		return ;
	}
	curent = *head;
	previous = NULL;

	if ((check(curent, new)) > 0)
	{
		if (curent == *head)
		{
			*head = new;
			insertBefore(previous, curent, new);
			return ;
		}
	}
	previous = curent;
	curent = curent->next;
	while (curent)
	{
		if ((check(curent, new)) > 0)
		{
			insertBefore(previous, curent, new);
			return ;
		}
		previous = curent;
		curent = curent->next;
	}
	insertAfter(previous, new);
}
