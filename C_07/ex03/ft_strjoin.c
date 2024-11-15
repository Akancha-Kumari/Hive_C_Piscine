/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:34:23 by akumari           #+#    #+#             */
/*   Updated: 2024/08/17 15:26:32 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += ft_strlen(sep) * (size - 1);
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;
	int		i;

	if (size == 0)
		return (0);
	total_length = 0;
	i = 0;
	total_length = ft_total_length(size, strs, sep);
	result = malloc(total_length + 1);
	if (!result)
		return (0);
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(result, sep);
		}
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	*arr[] = {"Hello", "Hi", "Bye", "See You"};
	char	*sep;
	int		size;
	char	*result;

	sep = "/";
	size = sizeof(arr) / sizeof(arr[0]);
	result = ft_strjoin(size, arr, sep);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
