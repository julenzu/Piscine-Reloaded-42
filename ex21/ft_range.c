/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzuazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 14:41:37 by jzuazo            #+#    #+#             */
/*   Updated: 2026/07/23 14:42:37 by jzuazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*#include <stdio.h>

int	main(void)
{
	int min = -5;
	int max = 2;
	int i = 0;
	int *array = ft_range(min, max);

	while (i < (max - min))
	{
		printf("%d", array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
