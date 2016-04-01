#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
int        ft_strlen(char *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}
*/
/*
char    *ft_strcpy(char *dst, char *src)
{
	char *save;
	save = dst;
printf("www\n");
while ( (*dst++ = *src++) != 0 )
	printf("%c", *dst)
	;
//		if (ft_strlen(s1) > ft_strlen(s2))
//			return(NULL);
	while (s2[i] != '\0')
	{
		{
//		s2[i]++;
//		s1[i]++;
	*dst = *src;
	return (save);
}
*/

char    *ft_strcpy(char *dst, char *src)
{
	int i;
	char *save;
	i = 0;
	save = dst;
	while (src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return save;
}

int main (void)
{
	char dst[50] = "salut";
	char src[50] = "bonjour";
	printf("%s", ft_strcpy(dst, src));
	return 0;
}
