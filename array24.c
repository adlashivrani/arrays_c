/*C program to find sum of two matrices.*/
#include <stdio.h>
void addition(int a[4][4], int b[4][4]);
int main()
{
    int a[4][4];
	int b[4][4];
	int i;
	int j;
    printf("Enter Elements of First 4*4 Matrix: \n\n");
    for (i = 0;i <= 3; i++)
          for (j = 0;j <= 3; j++)
          {
               scanf("%d", &a[i][j]);
          }
    printf("\nEnter Elements of Second 4*4 Matrix: \n\n");
    for (i = 0;i <= 3; i++)
          for (j = 0;j <= 3; j++)
          {
               scanf("%d", &b[i][j]);
          }
	addition(a,b);
	return 0;
}
void addition(int a[4][4], int b[4][4])
{
	int i;
	int j;
	int s[4][4];
     for (i = 0;i <= 3; i++)
          for (j = 0;j <= 3; j++)
          {
               s[i][j] = a[i][j] + b[i][j];
          }
     printf("\nSum of Matrices :\n\n");
     for (i = 0;i <= 3; i++)
     {
          for (j = 0; j <= 3; j++)
          {
               printf("%d ", s[i][j]);
          }
     printf("\n");
     }
}
