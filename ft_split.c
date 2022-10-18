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

static int	ft_nbpart(char const *s, char c)
{
	int	i;
	int	count;

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

static int	ft_nbchar(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c)
		i++;
	printf("nbchar = %d\n", i);
	return (i);
}

static char	*ft_fillpart(char const *s, char c, int part)
{
	char			*str;
	unsigned int	i;
	unsigned int	nbchar;

	nbchar = ft_nbchar(s, c);
	return ("str");
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	i;
	unsigned int	nbpart;

	nbpart = ft_nbpart(s, c);
	array = ft_calloc(sizeof(char **), nbpart);
	if (!array)
		return (0);
	// fill array
	i = 0;
//	while (i < nbpart)
//	{
//		array[i] = ft_fillpart(s, c, i);
//		i++;
//	}
	return (array);
}

int	main(void)
{
	int		i;
	char	**array;
	char *temp = "---t-ttt--t";
	printf("Nb mot : %d\n", ft_nbpart(temp, '-'));
//	array = ft_split("baaabybqbz", 'b');
//	i = 0;
//	while (array[i])
//	{
//		printf("%s\n", array[i]);
//		i++;
//	}
	return (0);
}

