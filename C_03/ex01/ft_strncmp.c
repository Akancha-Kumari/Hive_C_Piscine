/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:57:58 by akumari           #+#    #+#             */
/*   Updated: 2024/08/12 12:26:50 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	char			str[] = "Akancha5";
	char			str1[] = "Akancha";
	int				c;
	unsigned int	i;

	i = 0;
	while (str1[i])
	{
		i++;
	}
	c = ft_strncmp(str, str1, i);
	printf("%d", c);
	return (0);
}*/
