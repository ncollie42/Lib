/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 15:18:05 by ncollie           #+#    #+#             */
/*   Updated: 2019/08/11 19:43:39 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nc_list.h"

void	lstdel(t_list **alst, void (*del)(void *))
{
	t_list *tmp;
	
	if (alst && *alst)
		while (tmp)
		{
			del(tmp->content);
			tmp = tmp->next;
		}
}
