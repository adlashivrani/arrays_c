#include<stdio.h>
#if 0
int main() 
{
	char array[10][10];
	printf("Enter the names :");
	for ( int i = 0; i < 10; i++)
	{	
		fgets(array[i], 10, stdin);
	}
	printf("Entered names:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d:-%s", i+1, array[i]);
	}
	printf("\n");
	return 0;
}
#endif
#if 1
int main()
{
	char str[20] = { "hello\0hi\n"};
	printf("%s", str);
}
#endif
#if 0
int main() 
{
	char str[20];
	fgets(str, 10, stdin);
	printf("%s", str);
}
#endif
