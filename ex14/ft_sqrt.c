/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzuazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 10:03:30 by jzuazo            #+#    #+#             */
/*   Updated: 2026/07/22 10:03:53 by jzuazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	resultado;
	int	i;

	resultado = 1;
	i = 0;
	if (nb < 0)
		nb *= -1;
	while (resultado <= nb)
	{
		i = resultado * resultado;
		if (i == nb)
			return (resultado);
		resultado++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(-1764));
}*/
