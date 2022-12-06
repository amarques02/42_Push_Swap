/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarques <amarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:48:13 by amarques          #+#    #+#             */
/*   Updated: 2022/12/05 12:58:10 by amarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	rra(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = lstlast((*a));
	tmp2 = (*a);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	add_front(a, tmp);
	tmp2->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = lstlast((*b));
	tmp2 = (*b);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	add_front(b, tmp);
	tmp2->next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
