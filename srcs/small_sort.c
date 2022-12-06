/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarques <amarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:56:56 by amarques          #+#    #+#             */
/*   Updated: 2022/12/05 13:14:14 by amarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	sort_2(t_list **a)
{
	if ((*a)->data > (*a)->next->data)
		sa(a);
}
/*  1 3 2
	2 3 1
	2 1 3
	3 2 1
	3 1 2 */

void	sort_3(t_list **a)
{
	int	min;
	int	n[3];

	n[0] = (*a)->index;
	n[1] = (*a)->next->index;
	n[2] = (*a)->next->next->index;
	min = INT_MAX;
	find_min(*a, &min);
	if (n[0] == min || (n[2] == min && n[1] > n[0]))
		rra(a);
	if ((n[0] > n[1] && n[0] > n[2]))
		ra(a);
	if (!is_sorted(*a))
		sa(a);
}

void	sort_4(t_list **a, t_list **b)
{
	int	min;
	int	max;

	min = INT_MAX;
	max = INT_MIN;
	find_min_max(*a, &min, &max);
	while ((*a)->index != min && (*a)->index != max)
		ra(a);
	pb(a, b);
	if (!check(*a))
		sort_3(a);
	pa(a, b);
	if ((*a)->index == max)
		ra(a);
}

void	sort_5(t_list **a, t_list **b)
{
	int	min;
	int	max;

	min = INT_MAX;
	max = INT_MIN;
	find_min_max(*a, &min, &max);
	while ((*a)->index != max && (*a)->index != min)
		ra(a);
	pb(a, b);
	while ((*a)->index != min && (*a)->index != max)
		ra(a);
	pb(a, b);
	if (!check(*a))
		sort_3(a);
	if ((*b)->index < (*b)->next->index)
		rb(b);
	pa(a, b);
	ra(a);
	pa(a, b);
}
