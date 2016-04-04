#include <stdlib.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;
	int	j;
//	int result;
//	char aff;
	j = 1;
	i = 0;
	if (argc != 2)
		write(1, '\n', 1);
	while (argv[i] != '\0')
	{
		if (&argv[i] >= 65 && &argv[i] <= 90)
		{
//			result = &argv[i] - 64;
//			aff = &argv[i] * result ;
//			write(1, aff, result);
			while (&argv[j] != (&argv[i] - 64))
			{
				write(1, &argv[i], 1);
//				i++;
			}
		}
		if (&argv[i] >= 97 && &argv[i] <= 122)
		{
				while (&argv[j] != (&argv[i] - 64))
				{
					write(1, &argv[i], 1);
//					i++;
				}
		}
		else
		{
			write(1, &argv[i], 1);
//			i++;
		}
		i++;
	}
	write(1, '\n', 1);
	return (0);
}
