/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarques <amarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:40:47 by amarques          #+#    #+#             */
/*   Updated: 2022/12/05 14:46:57 by amarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	set_index(t_list **a)
{
	t_list	*tmp;
	int		min;
	int		i;

	i = 0;
	while (++i <= lstsize(*a))
	{
		tmp = *a;
		min = INT_MAX;
		while (tmp)
		{
			if (min > tmp->data && tmp->index == 0)
				min = tmp->data;
			tmp = tmp->next;
		}
		tmp = *a;
		while (tmp && tmp->data != min)
			tmp = tmp->next;
		tmp->index = i;
	}
}
