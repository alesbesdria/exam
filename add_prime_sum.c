#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

	i = 2;
	while (nb > i)
	{
		if ((float)nb / i - (nb / i) == 0)
			return (0);
		i++;
	}
	return (nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int		ft_add_prime_sum(int nb)
{
	int	result;

	result = 0;
	while (nb > 1)
	{
		result = ft_prim(nb) + result;
		nb--;
	}
	return (result);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (argv[1][i] == '-')
	{
		write(1, "0\n", 2);
		return (0);
	}
	ft_putnbr(ft_add_prime_sum(ft_atoi(argv[1])));
	write(1, "\n", 1);
	return (0);
}
