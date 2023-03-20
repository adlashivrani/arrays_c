#include<stdio.h>
void dec_bin( int );
void main()
{
	int num;
	printf("\nEnter a decimal number:\n");
	scanf("%d", &num);
	dec_bin(num);
}
void dec_bin(int num)
{
	int arr[20];
	int i = 0;
	while ( num > 0) {
		arr[i] = num % 2;
		num /= 2;
		i++;
	}
	printf("\nbinary value:\n");
	for ( int j = i - 1; j >= 0; j--)
	{
		printf("%d", arr[j]);
	}
	printf("\n");
} 
	
