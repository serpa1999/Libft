#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include "libft.h"

void	ft_putstr(char *str)
{
	char	*char_pointer;

	char_pointer = str;
	while (*char_pointer != '\0' )
	{
		write (1, char_pointer, 1);
		char_pointer++;
	}
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putendl_fd(list->content, 1);
		list = list->next;
	}
}

void	clear_list(t_list **list)
{
	while (*list)
	{
		free(*list);
		*list = (*list)->next;
	}
	free(*list);
}

void	*ft_toupper_str(char *str)
{
	(void) str;
	// int	i;

	// i = 0;
	// while (str[i] != '\0')
	// {
	// 	str[i] = ft_toupper(str[i]);
	// 	i++;
	// }
	return ((void *)0);
}

// static void	ft_toupper_and_print_str(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// 	ft_putendl_fd(str, 1);
// }

/*int	main(void)
{
	t_list	*list1;
	// t_list	*list2;
	// t_list	*list3;
	// t_list	*list4;
	char	*data;

	data = malloc(4);
	//data = strdup("123\0");
	data[0] = '1';
	data[1] = '2';
	data[2] = '3';
	data[3] = '\0';
	list1 = ft_lstnew(data);
	// list2 = ft_lstnew("456");
	// list3 = ft_lstnew("789");
	//ft_lstadd_front(&list2, list1);
	//ft_lstadd_back(&list4, list1);
	//ft_lstadd_back(&list1, list3);
	print_list(list1);
	//printf(" (size == %d)", ft_lstsize(list1));
	//print_list(ft_lstlast(list1));
	//clear_list(&list4);
	ft_lstdelone(list1, free);
	return (0);
}*/

int	main(void)
{
	t_list	*list_middle;
	t_list	*list_begin;
	t_list	*list_end;
	t_list	*empty_list;
	t_list	*list_upper;
	char	*data_middle;
	char	*data_begin;
	char	*data_end;

	empty_list = NULL;
	//data_middle = malloc(50);
	data_middle = ft_strdup("hello-world");
	//data_begin = malloc(50);
	data_begin = ft_strdup("The beginning of list");
	//data_end = malloc(50);
	data_end = ft_strdup("The end of list");
	list_middle = ft_lstnew(data_middle);
	list_begin = ft_lstnew(data_begin);
	list_end = ft_lstnew(data_end);
	ft_lstadd_front(&list_middle, list_begin);
	ft_lstadd_back(&list_begin, list_end);
	ft_putstr_fd("----------------Print list after adding to front and back-------------\n", 1);
	print_list(list_begin);
	// ft_putstr_fd("-------------------The number of elements in a list-------------------\n", 1);
	// ft_putnbr_fd(ft_lstsize(list_begin), 1);
	// ft_putstr_fd("\n----------------------The last element of the list------------------\n", 1);
	// ft_putendl_fd((ft_lstlast(list_begin))->content, 1);
	// ft_putstr_fd("\n----------------------ft_lstiter with ft_toupper------------------\n", 1);
	// ft_lstiter(list_begin, (void *)ft_toupper_and_print_str);
	// ft_putstr_fd("---ft_lstlast with null(expected nothing to print without mistakes)---\n", 1);
	// ft_lstlast(empty_list);
	// ft_putstr_fd("---Clear list and print (expected nothing to print without mistakes)--\n", 1);
	// ft_lstclear(&list_begin, free);
	// print_list(list_begin);
	ft_putstr_fd("\n---------------------------------ft_lstmap--------------------------\n", 1);
	list_upper = ft_lstmap(list_begin, (void *)ft_toupper_str, free);
	print_list(list_upper);
	print_list(list_begin);
	ft_lstclear(&list_upper, free);
	ft_lstclear(&list_begin, free);
	return (0);
}
