/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:53:48 by synicole          #+#    #+#             */
/*   Updated: 2022/10/19 14:53:52 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	struct s_list	*next;
	int				size;

	if (!lst)
		return (0);
	next = lst->next;
	size = 1;
	while (next)
	{
		next = next->next;
		size++;
	}
	return (size);
}
