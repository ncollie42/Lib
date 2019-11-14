#include "nc_list.h"

void append(t_list **head, t_list *new)
{
    t_list *tmp;
    if (!*head)
    {
        *head = new;
        return;
    }
    tmp = *head;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
    new->previous = tmp;
}

void appendOpt(t_list **head, t_list *new)
{
    static t_list *tmp;

    if (!*head)
    {
        *head = new;
        tmp = *head;
        return;
    }
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
    new->previous = tmp;
}
