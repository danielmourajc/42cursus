#include <stdio.h>

typedef struct    s_list
{
    void            *content;
    struct s_list    *next;
}                    t_list;

int    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    if (!lst)
    {
        *lst = new;
        return ;
    }
    new->next = *lst;
    *lst = new;
}


int main() 
{
    t_list elem0;
    t_list elem1;
    t_list elem2;
    t_list elem3;
    t_list *begin;

    begin = &elem1;
    elem1.next = &elem2;
    elem2.next = &elem3;
    elem3.next = 0;

    elem0.content = 01;
    elem1.content = 42;
    elem2.content = 84;
    elem3.content = 100;

    begin = ft_lstadd_front(&begin, &elem0);
    if (begin)
      begin = &elem0;
    printf("%d\n", elem0);
    return 0;
}