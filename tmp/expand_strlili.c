#include <unistd.h>

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	elim_dbl(char *s)
{
	int	i;
	int	j;
	int k;
	int	b;
	int	cpt;

	i = 0;
	j = ft_strlen(s) - 1;
	k = i;
	while ((s[i] == ' ' || s[i] == '\t') && s[i] != '\0')
		i++;
	while ((s[j] == ' ' || s[j] == '\t') && j > 0)
		j--;
	if (j == -1)
	{
		s[0] = 0;
		return;
	}
	while (i != j)
	{
		b = 1;
		while (!(s[i] == ' ' || s[i] == '\t'))
		{
			s[k] = s[i];
			write(1, &s[k], 1);
			i++;
			k++;
		}
		if (i > j)
			return;
		while (s[i] == ' ' || s[i] == '\t')
		{
			if (b == 1)
			{
				cpt = k + 3;
				while (k < cpt)
				{
					write(1, " ", 1);
					k++;
				}
				b = 0;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(argv[1]);
	if (argc == 2)
//	{
		elim_dbl(argv[1]);
//		while (argv[1][i] != argv[1][j])
//		{
//			write(1, &argv[1][i], 1);
//			i++;
//		}
//	}
	write(1, "\n", 1);
	return (0);
}
