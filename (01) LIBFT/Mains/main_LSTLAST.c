#include <stdio.h>

typedef struct    s_list
{
    int            content;
    struct s_list   *next;
}                    t_list;

t_list    *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (0);
    while (lst->next)
        lst = lst->next;
    return (lst);
}


int main() 
{
    t_list elem1;
    t_list elem2;
    t_list elem3;
    t_list *begin;
    
    begin = &elem1;
    elem1.next = &elem2;
    elem2.next = &elem3;
    elem3.next = 0;
    
    elem1.content = 42;
    elem2.content = 84;
    elem3.content = 100;

    begin = ft_lstlast(begin);
    
    printf("%d", *begin);
    return (0);
}