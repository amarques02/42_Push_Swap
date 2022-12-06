/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarques <amarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:53:32 by amarques          #+#    #+#             */
/*   Updated: 2022/12/05 14:49:35 by amarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	print_a(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp)
	{
		printf("Num:%i\n", tmp->data, tmp->index);
		tmp = tmp->next;
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
	stack_parse(av, &a);
	set_index(&a);
	if (is_sorted(a))
		print_msg(&a, 0);
	algo_redirections(&a, &b);
	print_msg(&a, 0);
	return (0);
}
