/* ************************************************************************** */
/*                                                                    /goinfre/kamonare/Desktop/Day02/ex01/ft_print_reverse_alphabet.c        */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamonare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:16:14 by kamonare          #+#    #+#             */
/*   Updated: 2020/07/13 13:13:13 by kamonare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_putchar_alphabet(void);
{
	char start;
	char end;

	start = 'a';
	end = 'z';
	while (start <= end)
	{
		ft_putchar(start);
		start++;
	}
}
