/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_in_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainadan <ainradan@student.42antananariv    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:05:11 by ainradan          #+#    #+#             */
/*   Updated: 2026/03/04 13:56:46 by ainadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "hashset.h"

void	stack_in_order(t_node **a, t_node **b)
{
	if (*b == NULL && is_sorted(*a))
		ft_printf("OK\n");
	else
		ft_putstr_fd("KO\n", 2);
}
