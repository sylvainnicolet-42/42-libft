/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:40:44 by synicole          #+#    #+#             */
/*   Updated: 2022/10/14 21:40:46 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	length;
	size_t	i_set;
	size_t	is_s1;

	length = ft_strlen(s1);
	i_set = 0;
	is_s1 = 0;
	while (set[i_set])
	{

	}
	ptr = ft_calloc(sizeof(char), length + 1);
	if (!ptr)
		return (0);
	return (ptr);
}

int	main(void)
{
	printf("%s", ft_strtrim("1234------", "123"));
	return (0);
}