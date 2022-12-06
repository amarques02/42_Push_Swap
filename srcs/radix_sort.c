/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarques <amarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:43:13 by amarques          #+#    #+#             */
/*   Updated: 2022/12/05 16:43:17 by amarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	radix_sort(t_list **a, t_list **b)
{
	int		max_bits;
	int		i;
	int		size;
	t_list	*tmp;

	max_bits = find_max_bits(*a);
	i = -1;
	while (++i < max_bits)
	{
		size = lstsize(*a);
		while (size--)
		{
			tmp = *a;
			if ((tmp->index >> i & 1))
				ra(a);
			else
				pb(a, b);
		}
		while (*b)
			pa(a, b);
	}
}
