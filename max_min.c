#include<stdio.h>
void max_min(int arr[]);
void main()
{
	int arr[10] = {20, 2, 8, 4, 6, 3, 5, 9, 11, 10};
	max_min(arr);
}
void max_min(int arr[10])
{
	int i;
	int max;
	int min;
	min = max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if(arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max : %d, min : %d", max, min);
}
