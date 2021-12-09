#include<stdio.h>
#include<conio.h>
main()
{
	int i, j;
	printf("Enter the number:\n");
	scanf("%d", &i);
	for(j = 1; j <= i;j++)
	{
		printf("%d\n", j);
	}
	getch();
}
