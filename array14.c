/*C program to read an array of 10 integers and find sum of all numbers.*/
#include <stdio.h>
void sum(int *a, int s);
int main()
{
    int a[10];
	int i;
	int s = 0;
    printf("Enter 10 Numbers:\n");
    for ( i = 0; i < 10; i++)
     {
          scanf("%d", &a[i]);
          s = s + a[i];
     }
	sum(a,s);
	return 0;
}
void sum(int *a, int s)
{
     printf("\nNumbers Stored in Array : \n");
     for (int i = 0; i < 10; i++)
          printf("a[%d]=%d\n", i, a[i]);
     printf("\nSum of Integer Numbers : %d", s);
}
