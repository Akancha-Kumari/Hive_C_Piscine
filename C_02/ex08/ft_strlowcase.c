/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:55:19 by akumari           #+#    #+#             */
/*   Updated: 2024/08/07 15:09:40 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	*c;
	char	str[] = "KSDHFIWRHFIjkjfbekhgf  nhi ogi 65r8kjh WIWUKSZERIUWEYTIRE";

	c = ft_strlowcase(str);
	printf("%s", c);
	return (0);
}*/
