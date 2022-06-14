#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

int main() 
{
	int	i;
	t_list elem1;
	t_list elem2;
	t_list elem3;
	t_list *begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	i = ft_lstsize(begin);
	printf("%d", i);
	return (0);
}
