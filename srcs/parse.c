/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarques <amarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:32:35 by amarques          #+#    #+#             */
/*   Updated: 2022/12/01 17:16:51 by amarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static int	check_dup(t_list *stack, int n)
{
	if (!stack)
		return (0);
	while (stack)
	{
		if (stack->data == n)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	ft_atoi(char **str, t_list **a)
{
	long	signal;
	long	nb;

	nb = 0;
	signal = 1;
	while ((**str >= 9 && **str <= 13) || **str == ' ')
		*str += 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			signal *= -1;
		*str += 1;
		if (!(**str >= '0' && **str <= '9'))
			print_msg(a, 1);
	}
	while (**str >= '0' && **str <= '9')
	{
		nb = (nb * 10) + (signal * (**str - '0'));
		*str += 1;
		if (nb > INT_MAX || nb < INT_MIN)
			print_msg(a, 1);
	}
	if (**str && !((**str >= 9 && **str <= 13) || **str == ' '))
		print_msg(a, 1);
	while ((**str >= 9 && **str <= 13) || **str == ' ')
		*str += 1;
	return (nb);
}

void	stack_parse(char **str, t_list **a)
{
	int		i;
	int		n;
	char	*s;

	i = 0;
	while (str[++i])
	{
		s = str[i];
		if (!*s)
			print_msg(a, 1);
		while (*s)
		{
			n = ft_atoi(&s, a);
			if (check_dup(*a, n))
				print_msg(a, 1);
			add_back(create_node(n), a);
		}
	}
}

void	algo_redirections(t_list **a, t_list **b)
{
	/* print_a(a); */
	/* printf("LIST SIZE:%d \n", lstsize(*a)); */
	if (lstsize(*a) == 2)
		sort_2(a);
	else if (lstsize(*a) == 3)
		sort_3(a);
	else if (lstsize(*a) == 4)
		sort_4(a, b);
	else if (lstsize(*a) == 5)
		sort_5(a, b);
	/* else 
	{
		
	} */
	/* print_a(a); */
}

/* static int is_whitespace(char **str)
{
	
}
 */