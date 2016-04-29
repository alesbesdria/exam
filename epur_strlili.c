#include <unistd.h>

int			ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int			main(int argc, char ** argv)
{
	int		i;
	int		j;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}	
	while ((argv[1][i] == 9 || argv[1][i] == 10 || argv[1][i] == 11
				|| argv[1][i] == 32) && argv[1][i] != '\0')
		i++;
	j = ft_strlen(argv[1]) - 1;
	while (argv[1][i] != '\0' && argv[1][i] < argv[1][j])
	{
		j = ft_strlen(argv[1]) - 1;
		while (argv[1][j] <= 126 && argv[1][j] >= 33)
			j--;
		while (argv[1][i] <= 126 && argv[1][i] >= 33)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		if (argv[1][i] == 9 || argv[1][i] == 10 || argv[1][i] == 11 
				|| argv[1][i] == 32)
			write(1, " ", 1);
		while (argv[1][i] >= 126 && argv[1][i] <= 33)
			i++;
	}
	write(1, "\n", 1);
	return (0);
}

