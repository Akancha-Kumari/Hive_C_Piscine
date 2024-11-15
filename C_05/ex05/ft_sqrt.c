/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:01:26 by akumari           #+#    #+#             */
/*   Updated: 2024/08/14 14:01:33 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	long	index;
	long	value;

	value = nb;
	if (value <= 0)
		return (0);
	if (value == 1)
		return (1);
		
	index = 2;
	if (value >= 2)
	{
		while (index * index <= value)
		{
			if (index * index == value)
				return (index);
			index++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	int	n;
	int	ans;

	n = 4;
	ans = ft_sqrt(256);
	printf("%d", ans);
	return (0);
}*/
