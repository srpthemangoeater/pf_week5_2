//64010846
#include <stdio.h>
int main()
{
	int a,r=1;
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for(int k=0;k<a-i-1;k++)
			printf(" ");
		for (int j = 0; j < r; j++)
			printf("*");

		printf("\n");
		r = r + 2;
	}
	return 0;
}