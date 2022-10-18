/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:36:34 by synicole          #+#    #+#             */
/*   Updated: 2022/10/17 20:36:37 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;
	size_t			len;

	array = ft_calloc(sizeof(char **), ft_countword(s, c) + 1);
	if (!array)
		return (0);
	i = 0;
	j = 0;
	len = 0;
	while (s[j])
	{
		if (s[j] != c)
		{
			start = j;
			while (s[j] != c)
			{
				len++;
				j++;
			}
			array[i] = ft_substr(s, start, len);
			len = 0;
			i++;
		}
		j++;
	}
	return (array);
}


int	main(void)
{
	int		i;
	char	**array;

	array = ft_split("p--y-----h-", '-');
	i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
}
