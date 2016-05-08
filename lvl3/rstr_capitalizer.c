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
	int		av;
	int		ar;
	int		j;
	short	b;

	j = 1;
	printf("argc : %d\n", argc);
	if (argc <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (j <= argc)
	{
		av = 0;
		ar = ft_strlen(argv[j]) - 1;
		while (argv[j][av] != '\0')
		{
			while (!((argv[j][ar] >= 97 && argv[j][ar] <= 122)
					|| (argv[j][ar] >= 65 && argv[j][ar] <= 90))
					&& (argv[j][av] != '\0') && (j <= argc))
			{
				ar--;
				av++;
			}
			b = 1;
			while (((argv[j][ar] >= 97 && argv[j][ar] <= 122)
					|| (argv[j][ar] >= 65 && argv[j][ar] <= 90))
					&& (argv[j][av] != '\0') && (j <= argc))
			{
				if (b == 1)
				{
					if (argv[j][ar] >= 97 && argv[j][ar] <= 122)
						argv[j][ar] = argv[j][ar] - 32;
					b = 0;
				}
				else if (argv[j][ar] >= 65 && argv[j][ar] <= 90)
					argv[j][ar] = argv[j][ar] + 32;
				av++;
				ar--;
			}
		}
		av = 0;
		while (argv[j][av] != '\0')
		{
			write(1, &argv[j][av], 1);
			av++;
		}
		write(1, "\n", 1);
		j++;
		if (j >= argc)
			return (0);
	}
	return (0);
}
