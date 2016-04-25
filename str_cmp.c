#include <string.h>
#include <stdio.h>

int ft_strcmp (const char *d, const char *s)
{
	while (*d != '\0') {
		if (*d != *s)
			return *d - *s;
		d++;
		s++;
	}

	return *d - *s;
}

int		main(void)
{
	char d[10] = "bonjour";
	char s[10] = "salut";
	printf("ft_strcmp : %d\n", ft_strcmp(d, s));
	printf("strcmp : %d\n", ft_strcmp(d, s));
	return (0);
}
