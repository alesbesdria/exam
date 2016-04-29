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

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	if (argc == 2)
	{
		j = ft_strlen(argv[1]) - 1;
		while (argv[1][j] == 32 || argv[1][j] == 9)
			j--;
		while ((argv[1][i] != '\0' || argv[1][i] <= j)/* && (argv[1][i] != 32 || argv[1][i] != 9)*/)
		{
			if (argv[1][i] == 32 || argv[1][i] == 9)
				i++;
			l = i;
			if (argv[1][i] != 32 || argv[1][i] != 9)
				i++;
			k = i;
/*			while (argv[1][k] <= 126 && argv[1][k] >= 33)
			{
				write(1, &argv[1][i], 1);
				k--;
			}*/
			while (argv[1][l] <= argv[1][k])
			{
				write(1, &argv[1][l], 1);
				l++;
			}
			if (argv[1][i] == 32 || argv[1][i] == 9)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
