#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int	i;

	if (start >= end)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (end - start));
	i = 0;
	while (start < end)
	{
		tab[i] = start;
		i++;
		start++;
	}
	return (tab);
}
