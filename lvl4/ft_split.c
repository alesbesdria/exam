#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	k;
	char **spl;

	i = 0;
	j = 0;
	k = 0;
	spl = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[j] != '\0')
	{
		while (str[j] != '\0' || str[j] != 9 || str[j] != 32)
			j++;
		while (str[j] != '\0' && (str[j] <= 126 && str[j] >= 33))
		{
			spl[i][k] = str[j];
			k++;
			j++;
		}
		i++;
	}
	spl[i][k] = '\0';
	return (spl);
}

int	main(void)
{
	char **s;
	*s = "salut les amis !!!";
	ft_split(*s);
	printf("%s\n", s[0]);
	printf("%s\n", s[1]);
	printf("%s\n", s[2]);
	printf("%s\n", s[3]);
	printf("%s\n", s[4]);
	printf("%s\n", s[5]);
	return (0);
}
