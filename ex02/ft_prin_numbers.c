/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prin_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamonare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:36:01 by kamonare          #+#    #+#             */
/*   Updated: 2020/07/08 15:01:45 by kamonare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(void);
{
	write(1 , &c, 1);
}

void	ft_print_numbers(void);
{
	char b = '0';

	while (b <='9')
	{
		ft_putchar(b);
		b++;
	}	
}
