#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	short	b;

	i = 0;
	j = 1;
	while (argv[j][i] != '\0' && j < argc)
	{
		b = 1;
		while (!((argv[j][i] >= 97 && argv[j][i] <= 122)
			|| (argv[j][i] >= 65 && argv[j][i] <= 90)) && argv[j][i] != '\0'
			&& j < argc)
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		while (((argv[j][i] >= 97 && argv[j][i] <= 122)
			|| (argv[j][i] >= 65 && argv[j][i] <= 90)) && argv[j][i] != '\0'
			&& j < argc)
		{
			if (b == 1)
			{
				if (argv[j][i] >= 97 && argv[j][i] <= 122)
					argv[j][i] = argv[j][i] - 32;
				b = 0;
			}
			else
				if (argv[j][i] >= 65 && argv[j][i] <= 90)
					argv[j][i] = argv[j][i] + 32;
			write(1, &argv[j][i], 1);
			i++;
		}
		if (argv[j][i] == '\0')
		{
			i = 0;
			j++;
			if (j == argc)
				return (0);
		}
	}
	return (0);
}
