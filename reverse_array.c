#include<stdio.h>
void reverse_array( int arr[]);
void main()
{
	int arr[10] = { 1, 2, 3, 4, 6, 9, 12, 43, 11, 5};
	printf("\nOriginal array:\n");
	for ( int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	reverse_array(arr);
}
void reverse_array(int arr[10])
{
	int i;
	int j;
	int temp;
	for ( i = 0, j = 9; i < j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	printf("\nreverse array:\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
	
