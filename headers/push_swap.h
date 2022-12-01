/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarques <amarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:39:13 by amarques          #+#    #+#             */
/*   Updated: 2022/12/01 16:26:19 by amarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}					t_list;

t_list	*lstnew(int nb);
t_list	*lstlast(t_list *lst);
t_list	*create_node(int nb);
void	print_a(t_list **a);
void	stack_parse(char **str, t_list **a);
void	set_index(t_list **a);
int		ft_atoi(char **str, t_list **a);
void	add_back(t_list *new, t_list **stack);
int		lstsize(t_list *lst);
void	add_front(t_list **lst, t_list *new);
void	print_msg(t_list **a, int error);
void	algo_redirections(t_list **a, t_list **b);
void	find_min(t_list *a, int *n);
void	find_max(t_list *a, int *n);
void	find_min_max(t_list *a, int *max, int *min);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
int		is_sorted(t_list *a);
void	sort_2(t_list **a);
void	sort_3(t_list **a);
void	sort_4(t_list **a, t_list **b);
void	sort_5(t_list **a, t_list **b);
void	freelst(t_list **a);

#endif