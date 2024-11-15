/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:48:43 by akumari           #+#    #+#             */
/*   Updated: 2024/08/07 18:06:35 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_word;

	i = 0;
	first_word = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && first_word)
		{
			str[i] = str[i] - 32;
			first_word = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !first_word)
			str[i] = str[i] + 32;
		else
		{
			if (!((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65
						&& str[i] <= 90) || (str[i] >= 48 && str[i] <= 57)))
				first_word = 1;
			else
				first_word = 0;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	*c;
	char	str[] = "salut, kjlsdh hshro sdsfhoif5 4534hl 453KJGDK cinquante+et+un";

	c = ft_strcapitalize(str);
	printf("%s", c);
	return (0);
}*/
