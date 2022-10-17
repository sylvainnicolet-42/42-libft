/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:30:04 by synicole          #+#    #+#             */
/*   Updated: 2022/10/16 20:30:09 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_getlength(int n)
{
	int length;

	length = 1;
	if (n < 0)
	{
		n *= -1;
		length++;
	}
	while (n >= 10)
	{
		n /= 10;
		length++;
	}
	return (length);
}

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (i < power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int 	length;
	int		i;

	length = ft_getlength(n);
	printf("l = %d\n", length);
	printf("n = %d\n", n);

	ptr = ft_calloc(sizeof(char), length);
	if (!ptr)
		return (0);
	i = 0;
	if (n < 0)
	{
		ptr[i] = '-';
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		ptr[i] = n / ft_iterative_power(10, (length - 1) - i) + '0';
		n %= ft_iterative_power(10, (length - 1) - i);
		i++;
	}
	ptr[i] = n + '0';

	return (ptr);
}

int	main(int argc, char** argv)
{
	(void) argc;
	printf("result = %s\n", ft_itoa(atoi(argv[1])));
	return (0);
}