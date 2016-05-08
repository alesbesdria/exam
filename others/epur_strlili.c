#include <unistd.h>

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
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc != 2)
	{
		write(1, "\n",1);
		return (0);
	}
	while (argv[1][i] == 9 || argv[1][i] == 32)
		i++;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 9 || argv[1][i] == 32)
		{
			argv[1][j] = 32;
			i++;
			j++;
			while (argv[1][i] == 9 || argv[1][i] == 32)
				i++;
		}
		else
			while (argv[1][i] != 9 && argv[1][i] != 32 && argv[1][i] != '\0')
			{
				argv[1][j] = argv[1][i];
				j++;
				i++;
			}
	}
	if (argv[1][j - 1] == 32)
		j--;
	argv[1][j] = '\0';
	write(1, argv[1], ft_strlen(argv[1]));
	write(1, "\n", 1);
	return (0);
}
