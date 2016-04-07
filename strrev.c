#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_swap(char *a, char *b)
{
	char	*c;

	*c = *a;
	*a = *b;
	*b = *c;
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(str);
	while (j < i)
	{
		ft_swap(&str[i - 1], &str[j]);
		j++;
		i--;
	}
	return (str);
}

int	main(void)
{
	char	str[10] = "";
	printf("%s", ft_strrev(str));
	return (0);
}
