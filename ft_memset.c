/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:27:48 by synicole          #+#    #+#             */
/*   Updated: 2022/10/11 10:27:50 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;
	char			*str;

	str = (char *) b;
	i = 0;
	while (i < len)
	{
		*str = c;
		str++;
		i++;
	}
	return (b);
}
