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
	char	c[1];

	*c = *a;
	*a = *b;
	*b = *c;
}

char	*ft_itoa(int nb)
{
	char	*s;
	int		result;
	int		i;
	int		j;
	int		j2;
	int		save;
	int		len;
	int		bzz;
	int		bzz2;

	i = 0;
	save = nb;
	s = malloc(sizeof(char) * 12);
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		result = nb % 10;
		s[i] = result + 48;
		nb = nb / 10;
		i++;
	}
	s[i] = '\0';
	j = 0;
	bzz = ft_strlen(s) - 1;
	bzz2 = bzz / 2;
	if (save >= 0)
	{
		i = 0;
		while (i <= bzz2)
		{
			ft_swap(&s[i], &s[bzz]);
			bzz--;
			i++;
		}
	}
	else
	{
		i = 1;
		while (i <= bzz2)
		{
			ft_swap(&s[i], &s[bzz]);
			bzz--;
			i++;
		}
	}
	return (s);
}
