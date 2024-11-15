/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:47:55 by akumari           #+#    #+#             */
/*   Updated: 2024/08/17 11:55:24 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*listofarray;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	listofarray = malloc(range * sizeof(int));
	if (!listofarray)
		return (0);
	while (i < range)
	{
		listofarray[i] = min + i;
		i++;
	}
	return (listofarray);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*value;
	int	i;
	int	size;

	min = 15;
	max = 50;
	i = 0;
	size = max - min;
	value = ft_range(min, max);
	while (i < size)
	{
		printf("%d\t", value[i]);
		i++;
	}
}*/
