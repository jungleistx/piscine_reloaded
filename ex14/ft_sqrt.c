/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:36:27 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/10/28 12:54:29 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	test;

	if (nb < 0)
		return (0);
	test = 1;
	if (test == nb)
		return (test);
	while (test * test != nb)
	{
		if (test * test > nb)
			return (0);
		test += 1;
	}
	return (test);
}
