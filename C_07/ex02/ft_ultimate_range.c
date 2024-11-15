/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:08:28 by akumari           #+#    #+#             */
/*   Updated: 2024/08/17 14:16:19 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	index;
	int	*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	index = 0;
	while (index < size)
	{
		arr[index] = min + index;
		index++;
	}
	return (size);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	val;

	min = 5;
	max = 10;
	val = ft_ultimate_range(&range, min, max);
	printf("%d", val);
	return (0);
}*/
