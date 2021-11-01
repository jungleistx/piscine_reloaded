/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:26:12 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/10/28 16:18:30 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	print_args(int argc, char *argv[]);
void	sort_params(int argc, char *argv[]);
void	swap_params(char **s1, char **s2);

int	main(int argc, char *argv[])
{
	int	count;

	count = argc;
	while (count > 1)
	{
		sort_params(argc, argv);
		count--;
	}
	print_args(argc, argv);
	return (0);
}

void	sort_params(int argc, char *argv[])
{
	while (argc - 1 > 1)
	{
		if (ft_strcmp(argv[argc - 1], argv[argc - 2]) < 0)
			swap_params(&argv[argc - 1], &argv[argc - 2]);
		argc--;
	}
}

void	swap_params(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	print_args(int argc, char *argv[])
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
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}
