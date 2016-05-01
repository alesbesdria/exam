#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i] != '\0')
		result = result * 10 + s[i] - '\0';
	return (result);
}

int		ft_prim(int nb)
{
	int		i;
	float	result1;
	int		result2;

	result = 0;
//	while (1 < nb)
//	{
	i = 1;
		while (nb > i)
		{
			result1 = nb / (nb - i);
			result2 = nb / (nb - i);
			if (result1 != result2)
			{
				nb--;
				i = 1;
			else
				use = result;
			if (result == nb && result == 1)
			{
				return (result);
			}
			i++;
		}
//		nb--;
//	}
	return (0);
}

int		main(int argc, char **argv)
{
	
	return (0);
}
