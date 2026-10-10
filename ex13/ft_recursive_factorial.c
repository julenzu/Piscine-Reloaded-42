/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzuazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:45:46 by jzuazo            #+#    #+#             */
/*   Updated: 2026/07/20 14:51:34 by jzuazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb > 1)
	{
		resultado = nb * ft_recursive_factorial(nb - 1);
		return (resultado);
	}
	else
		return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(12));
}*/
