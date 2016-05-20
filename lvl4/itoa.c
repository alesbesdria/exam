#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *s)
{
	int i;
	i = 0;
	while(s[i] != '\0')
		i++;
	return(i);
}

void	ft_swap(char *a, char *b)
{
	char	*c;

	c = a;
	a = b;
	b = c;
}

char	*ft_itoa(int nb)
{
	char	*s;
	int		result;
	int		i;
	int		j;
	int		save;
	int		len;
	int bzz;

	i = 0;
	j = 0;
	save = nb;
	s = malloc(sizeof(char) * 12);
	while (nb > 0)
	{
		result = nb % 10;
		s[i] = result + 48;
		nb = nb / 10;
		i++;
	}
	bzz = ft_strlen(s);
	if (save >= 0)
	{
		while (bzz != j && j != bzz)
		{
			ft_swap(&s[j], &s[bzz]);
			bzz--;
			j++;
		}
	}
	else
	{
		i++;
		s[i] = '-';
		while (bzz != j && j != bzz)
		{
			ft_swap(&s[j], &s[bzz]);
			bzz--;
			j++;
		}
	}
	return (s);
}

int main(int argc, char **argv)
{
	char *res;
	res = ft_itoa(-123456);
	printf("%s", res);
	return (0);
}
