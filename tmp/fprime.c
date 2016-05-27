#include <stdlib.h>
#include <stdio.h>

int		ifprime(int nb)
{
	int	i;

	i = 2;
	while (nb > i)
	{
		if ((float)nb / i - (nb / i) == 0)
			return (0);
		i++;
	}
	return (nb);
}

int		main(int argc, char **argv)
{
	int	i;
	int	result;
	int	nb;
	int	b;

	i = 2;
	if (argc == 2)
	{
		nb = atoi(argv[1]);
		b = 1;
		while (i <= nb)
		{
			if (ifprime(i) != 0)
			{
				while ((float)nb / i == nb / i)
				{
					if (ifprime(i) > 1)
					{
						nb = nb / i;
						if (b == 1)
						{
							printf("%d", i);
							b = 0;
						}
						else
							printf("*%d", i);
					}
				}
//				i++;
			}
//			else
				i++;
		}
	}
	printf("\n");
	return (0);
}
