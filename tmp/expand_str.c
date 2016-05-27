/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 11:49:48 by exam              #+#    #+#             */
/*   Updated: 2016/05/17 13:20:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	elim_dbl(char *s)
{
	int i;
	int j;
	int	k;

	i = 0;
	j = ft_strlen(s);
	while ((s[j] == ' ' || s[j] == '\t') && s[j] != '\0')
			j--;
	while ((s[i] == ' ' || s[i] == '\t') && s[i] != '\0')
			i++;
	while (s[i] != '\0')
		if (s[i] == ' ' || s[i] == '\t')
		{
			s[i] = '\0';
			i++;
		}
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int	b;

	i = 0;
	j = ft_strlen(argv[1]);
	if (argc == 2)
	{
		elim_dbl(argv[1]);
		while ((argv[1][j] == ' ' || argv[1][j] == '\t') && argv[1][j] != 0)
			j--;
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
			i++;
		while (argv[1][i] < argv[1][j])
		{
			b = -1;
			while (argv[1][i] == '\0')
			{
				if (b == -1)
				{
					b = 0;
					write(1, "   ", 3);
					i++;
				}
			}
			write (1, &argv[1][i], 1);
		}
			/*
			while ((argv[1][i] >= 33 && argv[1][i] <= 126))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			if ((argv[1][i] < 33 || argv[1][i] > 126))
			{
				k = i;
				while (k < (i + 3))
				{
					write(1, " ", 1);
					k++;
				}
				i = k;
			}
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;i*/
		}
	write(1, "\n", 1);
	return (0);
}
