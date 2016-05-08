#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 90)
				|| (argv[1][i] >= 97 && argv[1][i] <= 122))
			{
				if ((argv[1][i] >= 65 && argv[1][i] <= 77)
					|| (argv[1][i] >= 97 && argv[1][i] <= 109))
					argv[1][i] = argv[1][i] + 13;
				else
					argv[1][i] = argv[1][i] - 13;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
		write (1, "\n", 1);
}
