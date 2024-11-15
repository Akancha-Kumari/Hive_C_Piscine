/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:19:51 by akumari           #+#    #+#             */
/*   Updated: 2024/08/06 14:24:38 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*str;

	str = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (str);
}
/*
int	main(void)
{
	char	p[] = "--------------------------------";
	char	z[] = "Hell6855 World Akancha";

	if (z >= 0)
	{
		ft_strcpy(p, z);
	}
	printf("%s\n", p);
	return (0);
}*/
