/*C program to read array of 3 integers, calculate the sum of their digits and print largest sum.*/
#include<stdio.h>
void largest(int *);
int main()
{
    int n[3];
	int i;
    printf("Enter Three Numbers:\n\n");
    for( i = 0;i < 3; i++)
     {
          scanf("%d", &n[i]);
     }
	largest(n);
	return 0;
}
void largest(int *n)
{
	int l;
	int i;
	int large;
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
    printf("\nSum of Digits:\n");
     for (i = 0; i < 3; i++)
     {
          int s = 0;
          while (n[i] > 0)
          {
               l = n[i] % 10;
               s = s + l;
               n[i] = n[i] / 10;
          }
          if (i == 0)
          {
               s1 = s;
               printf("\nFirst Number  = %d\n", s1);
          }
          if (i == 1)
          {
               s2 = s;
               printf("Second Number = %d\n", s2);
          }
          if (i == 2)
          {
               s3 = s;
               printf("Third Number  = %d\n", s3);
          }
     }
     if ((s1 > s2) && (s1 > s3))
     {
          large = s1;
     }
     else if (s2 > s3)
     {
          large = s2;
     }
     else
     {
          large = s3;
     }
     printf("\nLargest Sum = %d\n", large);
}
