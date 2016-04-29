#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		ft_putchar(s[1]);
		i++;
	}
}

int		ft_atoi(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i] !='\0')
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		main(int argc, char **argv)
{
	int	i;
	int	result;

	i = 1;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i <= 9)
	{
		result = i * ft_atoi(argv[1]);
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putstr(argv[1]);
		write(1, " = ", 3);
		ft_putnbr(result);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
