/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_chunk2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matus <matus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:37:58 by matus             #+#    #+#             */
/*   Updated: 2024/11/05 10:57:06 by matus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_chunks(t_node_stack *stack)
{
	t_node_stack	*current;

	stack->cx = 0;
	stack->co = 0;
	stack->ci = 0;
	current = stack;
	while (current != NULL)
	{
		if (current->min == true)
		{
			((*stack).ci)++;
		}
		else if (current->mid == true)
		{
			((*stack).co)++;
		}
		else if (current->max == true)
		{
			((*stack).cx)++;
		}
		current = current->next;
	}
}
