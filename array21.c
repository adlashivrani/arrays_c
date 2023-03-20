/*Write a C program to accept 'n' numbers and store all prime numbers in an array and display.*/
#include<stdio.h>
void display(int *, int);
int main()
{
    int a[10];
	int n;
	int i;
    printf("How Many Numbers You Want\n To Add in Array:\n\nEnter Limit : ");
    scanf("%d", &n);
    printf("\nEnter %d Numbers in Array:\n\n", n);
    for (i = 0;i < n; i++)
          scanf("%d", &a[i]);
	display(a,n);
	return 0;
}
void display(int *a, int n)
{
	int i;
	int j;
	int c = 0;
	int prime[10];
	int t = 0;
    for (i = 0;i < n; i++)
     {
          c = 0;
          for (j = 2;j < a[i]; j++)
          {
               if (a[i] % j == 0)
               {
                    c = 1;
                    break;
               }
          }
          if (c == 0)
          {
               prime[t] = a[i];
               t++;
          }
     }
     printf("\nPrime Numbers in Above Array:\n\n");
     for (i = 0;i < t; i++)
     {
          printf(" %d ", prime[i]);
     }
}
