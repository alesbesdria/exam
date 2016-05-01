#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[2][j] != '\0' && argv[1][i] != '\0')
	{
		if (argv[2][j] == argv[1][i])
			i++;
		j++;
	}
	printf("longueur chaine 1 = %d\n", ft_strlen(argv[1]));
	printf("i = %d\n", i);
	if (i != ft_strlen(argv[1]))
	{
		write(1, "0\n", 2);
		return (0);
	}
	write(1, "1\n", 2);
	return (0);
}
