#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int	res1;
	int	res2;
	int	result;

	if (argc != 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	res1 = atoi(argv[1]);
	res2 = atoi(argv[3]);
	if (argv[2][0] == '+')
		result = res1 + res2;
	if (argv[2][0] == '-')
		result = res1 - res2;
	if (argv[2][0] == '/')
		result = res1 / res2;
	if (argv[2][0] == '*')
		result = res1 * res2;
	if (argv[2][0] == '%')
		result = res1 % res2;
	printf("%d\n", result);
	return (0);
}
