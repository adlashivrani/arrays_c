/*C program to read matrix of size 3*3 and display transpose of matrix.*/
#include <stdio.h>
void transpose(int a[4][4]);
int main()
{
    int a[4][4];
	int i;
	int j;
    printf("Enter Elements for Matrix of Size 3*3:\n\n");
    for (i = 0; i <= 2; i++)
          for (j = 0;j <= 2; j++)
          {
               scanf("%d", &a[i][j]);
          }
	transpose(a);
	return 0;
}
void transpose(int a[4][4])
{
	int i;
	int j;
	int t[4][4];
     printf("\n3*3 Matrix:\n\n");
     for ( i = 0;i <= 2; i++)
     {
          for (j = 0;j <= 2; j++)
          {
               printf("%d ", a[i][j]);
          }
          printf("\n");
     }
     for (i = 0;i <= 2; i++)
          for (j = 0; j <= 2; j++)
          {
               t[j][i] = a[i][j]; // Transpose the matrix
          }
     /* Print the transpose matrix */
     printf("\nTranspose of Matrix:\n\n");
     for (i = 0;i <= 2; i++)
     {
          for (j = 0;j <= 2; j++)
          {
               printf("%d ", t[i][j]);
          }
     printf("\n");
     }
}

