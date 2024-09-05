/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emturkme <emturkme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:39:56 by emturkme          #+#    #+#             */
/*   Updated: 2024/08/19 15:52:40 by emturkme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	sol;
	char	sag;

	sol = 0;
	sag = 0;
	while (sol < 99)
	{
		sag = sol + 1;
		while (sag <= 99)
		{
			ft_putchar(sol / 10 + '0');
			ft_putchar(sol % 10 + '0');
			ft_putchar(' ');
			ft_putchar(sag / 10 + '0');
			ft_putchar(sag % 10 + '0');
			sag++;
			if (sol != 98)
				write(1, ", ", 2);
		}
		sol++;
	}
}
