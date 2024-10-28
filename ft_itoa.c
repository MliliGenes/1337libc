/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 05:23:20 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/10/28 06:03:03 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_nbr(int n)
{
	int				cp;
	unsigned int	pn;

	cp = 1;
	if (n < 0)
	{
		cp++;
		pn = (unsigned int)(n * -1);
	}
	else
		pn = (unsigned int)(n);
	while (pn / 10)
	{
		pn /= 10;
		cp++;
	}
	return (cp);
}

char	*ft_itoa(int n)
{
	size_t			len;
	unsigned int	pn;
	char			*str;
	int				i;

	len = nb_nbr(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		pn = (unsigned int)(n * -1);
	else
		pn = (unsigned int)(n);
	i = len;
	str[i--] = '\0';
	if (n < 0)
		str[0] = '-';
	while (i > 0)
	{
		str[i--] = (pn % 10) + '0';
		pn /= 10;
	}
	if (str[i] != '-')
		str[i] = (pn % 10) + '0';
	return (str);
}

// int main()
// {
// 	printf("%d",strcmp(ft_itoa(0),"0"));
// }

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

// t_list	ft_lstnew(void *content)
// {
// 	t_list	node;

// 	// node = malloc(sizeof(t_list));
// 	// if (!node)
// 	// 	return (NULL);
// 	node.content = content;
// 	node.next = NULL;
// 	return (node);
// }

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	if (!lst || !new)
// 		return ;
// 	new->next = *lst;
// 	*lst = new;
// }

// int	main(void)
// {
// 	t_list	node1;
// 	t_list	node2;
// 	t_list	node3;
// 	t_list	node4;
// 	t_list	*head;

// 	// node1 = malloc(sizeof(t_list));
// 	// node2 = malloc(sizeof(t_list));
// 	// node3 = malloc(sizeof(t_list));
// 	// node4 = malloc(sizeof(t_list));
// 	node1.content = "cat";
// 	node2.content = "|";
// 	node3.content = "-e";
// 	node4.content = "\%";
// 	node1.next = &node2;
// 	node2.next = &node3;
// 	node3.next = NULL;
// 	node4.next = NULL;
// 	head = &node1;
// 	while (head)
// 	{
// 		printf("%s\n\n", (char *)head->content);
// 		head = head->next;
// 	}
// 	// head = node1;
// 	// ft_lstadd_front(&head, &node4);
// 	// while (head)
// 	// {
// 	// 	printf("%s\n", (char *)head->content);
// 	// 	head = head.next;
// 	// }
// }
