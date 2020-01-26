#include <stdio.h>


int main(int argc, char const *argv[])
{

	int a[100][100],b[100][100];

	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			a[i][j] = 2;
			b[i][j] = 2;
		}
	}

	int c[100][100];

	int *d = *b;

	int *pivar7 = *a;
	int *piavr6;
	int *pivar5 = *b;
	int var2;
	long var3;
	int * pivar4;

	do{
		pivar4 = *c;
		piavr6 = pivar7;
		do{
			var2 = *piavr6;
			var3 = 0;
			do{
				pivar4[var3] = *c[var3]+var2 * pivar5[var3];
				printf("%d\n", c[0][0]);
			}while(var3 != 100);
			piavr6 += 100;
			pivar4 += 100;

		} while(pivar4 != *c+100);
		pivar5 += 100;
		pivar7 += 1;
	}while(pivar5 != *b+100);
	
	return 0;
}