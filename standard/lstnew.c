/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:10:31 by ncollie           #+#    #+#             */
/*   Updated: 2019/08/18 15:58:40 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nc_list.h"
#include <string.h>
#include <stdlib.h>

t_list **makeListHead()
{
	t_list **head;

	if (!(head = malloc(sizeof(t_list *))))
		return NULL;
    *head = NULL;
	return head;
}


t_list	*newNode(void *content)
{
	t_list	*new;
	
	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	*new = (t_list){ .content = content,
		.next = NULL,
		.previous = NULL};
	return (new);
}