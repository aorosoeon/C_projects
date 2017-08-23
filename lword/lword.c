#include <stdio.h>

int		condition1();
int		condition2();
char	lword();

int		main(int argc, char *argv[])
{
	if (condition1(argc) == 1)
		return (0);
	if (condition2(argv) == 1)
		return (0);
	lword(argv);
	return (0);
}

int		condition1(int argc)
{
	if (argc != 2)
		return (1);
	else
		return (0);
}

int		condition2(char *argv[]) 
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (argv[1][a] != '\0')
	{
		if ((argv[1][a] > 64 && argv[1][a] < 91) || (argv[1][a] > 96 && argv[1][a] < 123))
			b++;
		a++;
	}
	if (b < 1)
		return (1);
	else
		return (0);
}

char	lword(char *argv[])
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
		i++;
	while (argv[1][i - 1] == 32)
		i--;
	while ((argv[1][i - 1] != 32) && (i > 0))
		i--;
	while (argv[1][i] != '\0')
	{
		if (((argv[1][i] > 64 && argv[1][i] < 91) || (argv[1][i] > 96 && argv[1][i] < 123)))
			printf("%c", argv[1][i]);
		i++;
	}
	printf("\n");
	return (0);
}