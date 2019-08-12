#include "nc_list.h"
#include <string.h>
#include <stdio.h>

typedef struct test
{
    int num;
    char cc;
}test;


int byNameRev(void *one, void *two)
{
    char *a = (char *)((t_list *)one)->content;
    char *b = (char *)((t_list *)two)->content;
    int tmp = strcmp(a, b);
    if (tmp < 0)
        return 1;
    else if (tmp == 0)
        return 0;
    else
        return -1;
}

int byName(void *one, void *two)
{
    char *a = (char *)((t_list *)one)->content;
    char *b = (char *)((t_list *)two)->content;
    return strcmp(a, b);
}

int byChar(void *one, void *two)
{
    char *a = (test *)((t_list *)one)->content;
    char *b = (test *)((t_list *)two)->content;
    return strcmp(a, b);
}

void quickAdd(t_list **head)
{
    static char a = 'A';
    test *data = malloc(sizeof(test));
    data->num = a;
    data->cc = a;
    a++;
    t_list *node = newNode(data);
    lstAddSorted(head, node, byChar);
}
// void quickAdd(t_list **head)
// {
//     static char a = 'A';
//     char *tmp = malloc(sizeof(char) * 2);
//     tmp[0] = a;
//     tmp[1] = '\0';
//     a++;
//     t_list *node = newNode(tmp, 3);
//     lstAddSorted(head, node, byName);
// }

void quickPrint(t_list **head)
{
    t_list *tmp = *head;

    while(tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
}

int main(void)
{
    t_list **head = malloc(sizeof(t_list *));
    *head = NULL;

    for (int i = 0; i < 10; i++)
        quickAdd(head);
    quickPrint(head);
    
}