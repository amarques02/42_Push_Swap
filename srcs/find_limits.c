/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_limits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarques <amarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:35:59 by amarques          #+#    #+#             */
/*   Updated: 2022/12/05 14:42:14 by amarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	find_min(t_list *a, int *n)
{
	while (a)
	{
		if (*n > a->index)
			*n = a->index;
		a = a->next;
	}
}

void	find_max(t_list *a, int *n)
{
	while (a)
	{
		if (*n < a->index)
			*n = a->index;
		a = a->next;
	}
}

void	find_min_max(t_list *a, int *max, int *min)
{
	find_max(a, min);
	find_min(a, max);
}

int	find_max_bits(t_list *a)
{
	int	max;
	int	bits;

	bits = 0;
	max = INT_MIN;
	find_max(a, &max);
	while (max && ++bits)
		max >>= 1;
	return (bits);
}
