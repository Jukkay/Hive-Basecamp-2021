#include "ft_list.h"
#include <stdio.h>


void    print_list(t_list *begin_list)
{
    t_list *list;

    list = begin_list;
    while (list)
    {
        printf("%s ", list->data);
        list = list->next;
    }
    printf("\n");
}

int main(void)
{
	t_list *list;
	// t_list *list2;

	list = NULL;
	char *str;
	char *str2;
	void *data;
	str = "laaxc";
	str2 = "whee";
	data = str;
	list = ft_create_elem(data);
	ft_list_push_back(&list, str2);
	print_list(list);

	return 0;
}
