/*P7 . 25' Program to print the magic matrix*/
#include<stdio.h>
#define MAX 20
void main( )
{
	int a[MAX][MAX];
	int i;
	int j;
	int n;
	int num;
	printf("Enter value of n(odd value) ");
	scanf ("%d", &n);
	i = n - 1; /*Bottom row*/
	j = (n - 1)/2; /*Centre column*/
	for (num = 1; num <= n*n; num++)
	{
		a[i][j]  = num;
		i++; //*move
		j--; //*move
		if (num % n == 0)
		{
			i-=2;
			j++;
		}
		if ( i == n)
			i = 0;
		if (j == -1)
			j = n - 1;
		}/*End or for*/
	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++ )
		{
			printf("%4d",a[i][j]);
		}
		printf("\n") ;
	}
}
