#include <stdio.h>

void		print_bits(unsigned char octet)
{
	int		compteur;
	char	result;

	compteur = 0;
	while (compteur < 8)
	{
		result = (octet & (1 << (7 - compteur))) >> (7 - compteur);
		printf("%c", result + 48);
		compteur++;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	return (((octet & 15) * 16) + (octet) / 16);
}

unsigned char		reverse_bits(unsigned char octet)
{
	int				cpt;
	unsigned char	result;

	cpt = 0;
	result = 0;
	while (cpt < 8)
	{
		result = (result * 2) + ((octet & (1 << cpt)) >> cpt);
		cpt++;
	}
	return (result);
}

void	chenillard(unsigned char octet)
{
	int		cpt;

	cpt = 0;
//	octet = 0;
	while (1)
	{
		if (cpt == 8)
			cpt = 0;
		octet = octet >> 1;
		if (cpt <= 2)
			octet = octet | (1 << 7);
		cpt++;
		print_bits(octet);
		printf("\n");
	}
}

int		main(void)
{
	print_bits(2);
	printf("\n");
	print_bits(swap_bits(83));
	printf("\n");
	print_bits(reverse_bits(83));
	printf("\n");
	chenillard(0);
	printf("\n");
	printf("\n");
	return (0);
}

