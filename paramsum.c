#include <unistd.h>
/*
int		ft_atoi(int s)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	return (result);
}*/

int		main(int argc, char **argv)
{
	char	result;
	if (argc < 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
		return (argc);
	write(1, "\n", 1);
	return (0);
}
