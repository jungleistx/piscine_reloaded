/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:01:04 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/10/29 11:53:31 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;

	if (min >= max)
		return (NULL);
	if (min >= 0)
		size = max - min;
	else if (min < 0 && max >= 0)
		size = min * -1 + max;
	else
		size = min * -1 - max * -1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (size > 0)
	{
		array[size - 1] = max - 1;
		max--;
		size--;
	}
	return (array);
}
