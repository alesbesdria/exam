#include <stdio.h>

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = ft_strlen(argv[1]) - 1;
	while (argv[1][i] > 0 && argv[1][i] <= 32)
//	{
//		i--;
		if (i-- < 0)
		{
			write(1, "\n", 1);
			return (0);
		}
//	}
	j = i;
	while (argv[1][i] >= 33 && argv[1][i] <= 126)
		i--;
	i = i + 1;
	while (i <= j)
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}





