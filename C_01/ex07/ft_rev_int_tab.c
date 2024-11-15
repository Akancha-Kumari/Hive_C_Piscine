/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:51:47 by akumari           #+#    #+#             */
/*   Updated: 2024/08/06 12:58:09 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *arr, int n)
{
	int	*ptr;
	int	*ptr2;
	int	temp;
	int	i;

	ptr = &arr[0];
	ptr2 = &arr[n - 1];
	i = 0;
	while (i < (n / 2))
	{
		temp = *(ptr + i);
		arr[i] = *(ptr2 - i);
		arr[n - i - 1] = temp;
		i++;
	}
}
/*
void    PrintArray(int *arr, int n)
{
        int     *ptr;
        int     i;

        ptr = &arr[0];
        i = 0;
        while (i < n)
        {
                printf("%d", *(ptr + i));
                i++;
        }
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size;

	size = sizeof(arr) / sizeof(arr[0]);
	ft_rev_int_tab(arr, size);
	printf("Array after reverse\n");
	PrintArray(arr, size);
	return (0);
}*/
