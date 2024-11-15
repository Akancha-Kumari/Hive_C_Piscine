/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:30:30 by akumari           #+#    #+#             */
/*   Updated: 2024/10/29 09:46:10 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	value;

	value = 1;
	while (nb > 0)
	{
		value *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (value);
}

int	main(void)
{
	printf("%i", ft_iterative_factorial(8));
}
