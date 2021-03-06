#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int	compteur;
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

unsigned char	reverse_bits(unsigned char octet)
{
	int cpt;
	unsigned char result;

	cpt = 0;
	result = 0;
	while (cpt < 8)
	{
		result = (result * 2) + ((octet & (1 << cpt)) >> cpt);
	//	result = (result << 1) | (octet & (1 << (cpt))) >> (cpt);
		cpt++;
	}
	return (result);
}

int main(void)
{
	print_bits(2);
	printf("\n");
	print_bits(swap_bits(83));
	printf("\n");
	print_bits(reverse_bits(83));
	printf("\n");
	return (0);
}
