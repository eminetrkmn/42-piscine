/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emturkme <emturkme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:52:12 by emturkme          #+#    #+#             */
/*   Updated: 2024/09/05 10:52:29 by emturkme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*copy;

	if (max <= min)
		return (NULL);
	i = 0;
	copy = (int *)malloc((max - min) * sizeof(int));
	if (copy == NULL)
		return (NULL);
	while (min < max)
	{
		copy[i] = min;
		min++;
		i++;
	}
	return (copy);
}
