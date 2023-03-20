#include<stdio.h>
#define MAX 10
void main()
{
	int n;
	int i = 0;
	int j = 0;
	int l;
	int u;
	int num = 1;
	int arr[MAX][MAX] = {0};
	printf("Enter value of n:");
	scanf("%d", &num);
	l = 0;
	u = n- 1;
	for ( num = 1; num <= n*n; num++)
	{	
		arr[i][j] = num;
		if ( i == l && j < u)
			j++;
		else if ( j == u && i < u)
			i++;
		else if ( i == u && j > l)
			j--;
		else if ( j == l && i > l)
			i--;
		if ( arr[i][j] != 0)
		{
			l++;
			u--;
			i++;
			j++;
		} 
	} /*end of for */
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			printf("%4d", arr[i][j]);
		}
	}
}
