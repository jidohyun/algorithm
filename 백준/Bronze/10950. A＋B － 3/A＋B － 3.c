#include <stdio.h>
	
int main()
{
	int a, b, s;
	scanf("%d", &s);
	for (int i = 0; i < s; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

}
