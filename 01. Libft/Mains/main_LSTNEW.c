#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == 0)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}

int	main(void)
{
	int	i;
	t_list	*first;

	i = 101;
	first = ft_lstnew(&i);
	printf("content: %d\n", *(int *)(first->content));
	printf("next: %s\n", (char *)(first->next));

	return (0);
}
