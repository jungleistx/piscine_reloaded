/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:57:08 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/11/01 11:08:28 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	total;
	int	counter;

	total = 0;
	counter = 0;
	while (tab[counter] != 0)
	{
		if (f(tab[counter]) == 1)
			total++;
		counter++;
	}
	return (total);
}
