/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:46:27 by synicole          #+#    #+#             */
/*   Updated: 2022/10/11 19:46:28 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	el;
	unsigned int	length;
	unsigned int	i;

	length = ft_strlen(s);
	str = (unsigned char *) s;
	el = (unsigned char) c;
	i = 0;
	while (i <= length)
	{
		if (str[length - i] == el)
			return ((char *) str + (length - i));
		i++;
	}
	if (!el)
		return ((char *) str);
	return (0);
}
