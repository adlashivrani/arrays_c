/*C program to read an array of 10 integer and find sum of all even numbers.*/
#include <stdio.h>
void sum(int *);
int main()
{
    int a[8];
	int i;
    printf("Enter 8 Numbers:\n");
    for (i = 0;i < 8; i++)
          scanf("%d", &a[i]);
	sum(a);
	return 0;
}
void sum(int *a)
{
	int i;
	int e = 0;
	int o = 0;
     for (i = 0; i < 8; i++)
     {
          if (a[i] % 2 == 0)
               e = e + a[i];
          else
               o = o + a[i];
     }
     printf("\nSum of Even Numbers = %d", e);
     printf("\nSum of Odd Numbers  = %d", o);
}
