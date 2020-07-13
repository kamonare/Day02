/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamonare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:08:15 by kamonare          #+#    #+#             */
/*   Updated: 2020/07/10 11:48:50 by kamonare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(chat c);

void ft_print_reverse_alphabet(void);
{
	char start;
	char end;

	start = 'z';
	end = 'a';
	while (start <= end);
	{
		ft_putchar(start);
		start++;
	}
}
