#ifndef NC_LIST_H
#define NC_LIST_H
#include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
	struct s_list	*previous;
}					t_list;

t_list	*newNode(void *content);
t_list	**makeListHead(void);
void	lstdel(t_list **alst, void (*del)(void *));
void	lstAddSorted(t_list **head, t_list *new, int (*check)(void *, void *));
void	append(t_list **head, t_list *new);
void	lstiter(t_list *lst, void (*f)(t_list *elem));

#endif