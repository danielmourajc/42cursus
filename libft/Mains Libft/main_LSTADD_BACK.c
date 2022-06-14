#include <stdio.h>

typedef struct    s_list
{
    void            *content;
    struct s_list    *next;
}                    t_list;

t_list    *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (0);
    while (lst->next)
        lst = lst->next;
    return (lst);
}

int    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list    *temp;

    if (!new)
        return ;
    if (!(*lst))
    {
        *lst = new;
        return ;
    }
    temp = ft_lstlast(*lst);
    temp->next = new;
    return (new);
}


int main() 
{
    
    t_list elem1;
    t_list elem2;
    t_list elem3;
    t_list elem4;
    t_list *begin;

    begin = &elem1;
    elem1.next = &elem2;
    elem2.next = &elem3;
    elem3.next = 0;

    elem1.content = 42;
    elem2.content = 84;
    elem3.content = 100;
    elem4.content = 222;

    begin = ft_lstadd_back(&begin, &elem4);
    if (begin)
    {
      elem3.next = &elem4;
      elem4.next = 0;
    }
    printf("%d\n", elem4);
    return 0;
}