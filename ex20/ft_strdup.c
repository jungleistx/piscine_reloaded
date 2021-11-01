/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:28:53 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/10/29 11:00:17 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		length;
	char	*new;

	length = ft_strlen(src);
	new = malloc(sizeof(char) * length + 1);
	if (!new)
		return (NULL);
	*(new + length + 1) = '\0';
	while (length >= 0)
	{
		new[length] = src[length];
		length--;
	}
	return (new);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
