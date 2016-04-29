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
	int		i;
	int		j;
	short	b;

	i = 0;
	j = 1;
	while (!((argv[j][i] <= 97 && argv[j][i] >= 122)
			|| (argv[j][i] <= 65 && argv[j][i] >= 90)
			|| (argv[j][i] != '\0') || (j < argc)))
	{
		b = 1;
		while ()
		{
		if (b == 1)
			b = 0;
		}
	}
	return (0);
}
