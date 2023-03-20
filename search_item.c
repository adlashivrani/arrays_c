#include<stdio.h>
#define SIZE 5
void search_item(int arr[], int num);
void main()
{
	int i;
	int num;
	int arr[5] = { 1, 5, 8, 4, 0};
	printf("\nEnter the number to seach:\n");
	scanf("%d", &num);
	search_item(arr, num);
}
void search_item( int arr[5], int num)
{
	int i;
	for ( i = 0; i < 5; i++)
	{
		if (num == arr[i])
		{
			printf("\nelement found at location : %d\n", i);
			break;
		}
	}
	if (i == SIZE)
		printf("\nElement not found\n");
}
		
