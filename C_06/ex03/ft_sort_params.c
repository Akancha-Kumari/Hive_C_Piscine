/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:19:57 by akumari           #+#    #+#             */
/*   Updated: 2024/08/15 15:34:04 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(const char *a, const char *b)
{
	while (*a && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	ft_sort_strings(int num, char **s)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < num)
	{
		j = i;
		while (j > 0 && ft_strcmp(s[j - 1], s[j]) > 0)
		{
			temp = s[j - 1];
			s[j - 1] = s[j];
			s[j] = temp;
			j--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_sort_strings(argc - 1, argv + 1);
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i + 1][j] != '\0')
		{
			ft_putchar(argv[i + 1][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
