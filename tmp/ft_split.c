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

int		count_words(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == 9 || str[i] == 32) && str[i] != '\0')
			i++;
		while (str[i] <= 126 && str[i] >= 33 && str[i] != '\0')
		{
			i++;
		}
			j++;
	}
	return (j);
}

char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	k;
	int	save;
	char **spl;

	i = 0;
	j = 0;
	k = 0;
	save = 0;
	spl = malloc(sizeof(char*) * (count_words(str) + 1));
	while (str[j] != '\0')
	{
		while (str[j] != '\0' && (str[j] == 9 || str[j] == 32))
			j++;
		save = j;
		while (str[j] != '\0' && (str[j] <= 126 && str[j] >= 33))
			j++;
		spl[i] = malloc(sizeof(char*) * (j - save + 1));
		j = save;
		k = 0;
		while (str[j] != '\0' && (str[j] <= 126 && str[j] >= 33))
		{
			spl[i][k] = str[j];
			k++;
			j++;
		}
		spl[i][k] = '\0';
		i++;
	}
	spl[i] = NULL;
	return (spl);
}

int	main(void)
{
	char *s;
	char **d;
	s = "salut les amis !!!";
	d = ft_split(s);
	printf("%s\n", d[0]);
	printf("%s\n", d[1]);
	printf("%s\n", d[2]);
	printf("%s\n", d[3]);
	printf("%s\n", d[4]);
//	printf("%s\n", d[5]);
	return (0);
}
