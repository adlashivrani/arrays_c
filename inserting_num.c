#include<stdio.h>
#define SIZE 6
void inserting_num(int arr[], int num);
int main()
{
	int num;
	printf("\nEnter a number to insert in array:\n");
	scanf("%d", &num);
	int arr[SIZE] = {1, 6, 9, 3, 4};
	inserting_num(arr, num);
	return 0;
}
void inserting_num(int arr[SIZE], int num)
{
	int i;
	for ( i = SIZE - 2; num < arr[i] && i >= 0; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[i + 1] = num;
	for ( i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
