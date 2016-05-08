#include <stdio.h>
#include <unistd.h>
#include <libc.h>

int main(int argc, char **argv)
{
	write(1, argv[argc - 1], strlen(argv[argc - 1]));
}
