/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:31:43 by synicole          #+#    #+#             */
/*   Updated: 2022/10/19 18:31:49 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_el;

	if (lst && f)
	{
		current_el = lst;
		while (current_el->next)
		{
			f(current_el->content);
			current_el = current_el->next;
		}
		f(current_el->content);
	}
}
