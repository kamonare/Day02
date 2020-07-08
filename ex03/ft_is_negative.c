/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamonare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:03:34 by kamonare          #+#    #+#             */
/*   Updated: 2020/07/08 15:36:03 by kamonare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(void);
{
	write(1, &c, 1);
}

void ft_is_negative(int  c)
{
	if (c >= 0)
		ft_putchar('P');
	else if (c <= 0)
		ft_putchar('N');
}
