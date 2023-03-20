/*C program to read matrix of size 3*5 and count zeros present in the matrix.*/
#include <stdio.h>
void matrix(int a[3][5]);
int main()
{
    int a[3][5];
	int i;
	int j;
    printf("Enter Elements for Matrix of Size 3*5:\n\n");
    for (j = 0;j <= 2; j++) // j is used for rows
         for (i = 0;i <= 4; i++) // i is used for columns
          {
               scanf("%d", &a[j][i]);
          }
	matrix(a);
	return 0;
}
void matrix(int a[3][5])
{
	int i;
 	int j;
	int c = 0;
     /*Printing Matrix of Size 3*5*/
     printf("\nMatrix of Size 3*5: \n\n");
     for (i = 0;i <= 2; i++)
     {
          for (j = 0; j <= 4; j++)
          {
               printf("%3d ", a[i][j]);
          }
          printf("\n");
     }
     /* Count the total number of zeros in matrix 3*5 */
     for (j = 0;j <= 2; j++)
          for (i = 0;i <= 4; i++)
               if (a[j][i] == 0)
                     c++;
     printf("Zeros present in Above Matrix: %d", c);
}
