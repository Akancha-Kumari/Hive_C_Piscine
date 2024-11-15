/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:01:18 by akumari           #+#    #+#             */
/*   Updated: 2024/08/06 13:56:57 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (size != sizeof(str) - 1)
	{
		size++;
	}
	return (size);
}
/*
int	main(void)
{
	int	a;

	a = ft_strlen("Akancha");
	printf("%d", a);
	return (0);
}*/
