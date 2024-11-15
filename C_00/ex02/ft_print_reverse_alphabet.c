/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:59:27 by akumari           #+#    #+#             */
/*   Updated: 2024/10/29 09:36:36 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 122;
	while (alphabet >= 97)
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
