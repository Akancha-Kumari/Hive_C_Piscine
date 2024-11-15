/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:20:23 by akumari           #+#    #+#             */
/*   Updated: 2024/08/20 11:13:19 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_str_len(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *argv, int size)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (argv[i])
	{
		dest[i] = argv[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_str_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i], arr[i].size);
		i++;
	}
	arr[i].str = NULL;
	arr[i].copy = NULL;
	arr[i].size = 0;
	return (arr);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	t_stock_str *tab;
	int i = 0;
	argc = argc - 1;
	argv = argv +1;
	tab = ft_strs_to_tab(argc, argv);
	while (i < argc)
	{
		printf("%d\n", tab[i].size);
		printf("%s\n", tab[i].str);
		printf("%s\n", tab[i].copy);
		i++;
	}
	return 0;
}*/
