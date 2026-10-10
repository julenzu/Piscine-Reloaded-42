/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzuazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 13:54:26 by jzuazo            #+#    #+#             */
/*   Updated: 2026/07/20 13:55:34 by jzuazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		resultado *= nb;
		nb--;
	}
	return (resultado);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/
