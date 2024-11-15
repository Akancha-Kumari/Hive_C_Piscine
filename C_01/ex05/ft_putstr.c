/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:49:05 by akumari           #+#    #+#             */
/*   Updated: 2024/08/05 16:57:35 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	size;

	size = 0;
	while (size != sizeof(str) - 1)
	{
		write(1, &str[size], 1);
		size++;
	}
}
