/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emturkme <emturkme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:46:34 by emturkme          #+#    #+#             */
/*   Updated: 2024/09/05 18:50:17 by emturkme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*allocate_memory(int size, char **strs, char *sep)
{
	int	total_length;
	int	i;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += (size - 1) * ft_strlen(sep);
	return ((char *)malloc((total_length + 1) * sizeof(char)));
}

void	concat_strings(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[a++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[a++] = sep[j++];
		}
		i++;
	}
	result[a] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(1);
		return (result);
	}
	result = allocate_memory(size, strs, sep);
	if (!result)
		return (NULL);
	concat_strings(result, size, strs, sep);
	return (result);
}
