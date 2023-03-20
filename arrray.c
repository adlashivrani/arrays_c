#include<stdio.h>
#define SIZE 10
void array(char arr[]);
void main()
{
	char arr[SIZE];
	printf("\nEnter the string\n");
	fgets(arr, SIZE, stdin);
	arr[2] = '$';
	array(arr);
}
void array(char arr[])
{
	int i;
	for ( i = 0; i < SIZE; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}
