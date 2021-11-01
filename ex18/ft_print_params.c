/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:54:05 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/10/28 14:25:07 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	count;
	int	word;

	count = 1;
	while (count < argc)
	{
		word = 0;
		while (argv[count][word])
		{
			ft_putchar(argv[count][word]);
			word++;
		}
		ft_putchar('\n');
		count++;
	}
	return (0);
}
