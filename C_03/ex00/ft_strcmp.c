/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:51:42 by akumari           #+#    #+#             */
/*   Updated: 2024/08/12 12:19:21 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
		char    str[] = "Akancha5";
		char    str1[] = "Akancha";
		int             c;

		c = ft_strcmp(str, str1);
		printf("%d\n", c);
		return (0);
}*/
