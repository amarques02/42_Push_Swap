/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarques <amarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:00:25 by amarques          #+#    #+#             */
/*   Updated: 2022/11/30 16:40:37 by amarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*create_node(int nb)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return (0);
	tmp->data = nb;
	tmp->index = 0;
	tmp->next = NULL;
	return (tmp);
}

t_list	*lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	add_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

void	add_back(t_list *new, t_list **stack)
{
	t_list	*last;

	if (stack)
	{
		if (*stack)
		{
			last = lstlast(*stack);
			last->next = new;
		}
		else
			*stack = new;
	}
}
