/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:04:05 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/10/30 15:58:30 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_cat(char *argv)
{
	int		fd;
	char	buf[2];

	buf[1] = '\0';
	fd = open(argv, O_RDONLY);
	if (fd != -1)
	{
		while (read(fd, buf, 1) != 0)
			write(1, &buf[0], 1);
		close(fd);
	}
}
