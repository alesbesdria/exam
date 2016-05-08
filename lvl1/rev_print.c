#include <unistd.h>
#include <stdlib.h>

void	ft_swap(char *a, char *b)
{
	char *c;

	c = a;
	a = b;
	b = c;
}

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i - 1);
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
//	j = ft_strlen(argv[1]);
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
//	else
//	{
		j = ft_strlen(argv[1]);
		while (argv[1][i] != '\0')
		{
			ft_swap(&argv[1][i], &argv[1][j]);
			write(1, &argv[1][j], 1);
			j--;
			i++;
		}
//	}
	write(1, "\n", 1);
	return (0);
}
