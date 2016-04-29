#include <unistd.h>

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

char	elimdbl(char *s)
{
	int		i;
	char	*d;

	i = 0;
	while (s[i] != '\0' || s[i] != '\t' || s[i] != 32)
	{
		d = s;
		i++;
	}
	d[i] = 32;
	return (*d);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] < ft_strlen(argv[1]))
			{
				elimdbl(&argv[1][i]);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
