#include <stdlib.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;
	int cpt;
	char s[2];
	
	i = 0;
	s[1] = '\0';
	if (argc != 2)
		write(1, "\n", 1);
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] >= 65) && (argv[1][i] <= 90))
		{
//			result = &argv[i] - 64;
//			aff = &argv[i] * result ;
//			write(1, aff, result);
			cpt = 0;
			while (cpt < (argv[1][i] - 64))
			{
				s[0] = argv[1][i];
				write(1, s, 1);
				cpt++;
			}
		}
			else if ((argv[1][i] >= 97) && (argv[1][i] <= 122))
			{
				cpt = 0;
				while (cpt < (argv[1][i] - 96))
				{
					s[0] = argv[1][i];
					write(1, s, 1);
					cpt++;
				}
			}
				else
				{
					s[0] = argv[1][i];
					write(1, s, 1);
				}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
