/*C program to read an array of 8 integer values and find sum, average, greatest number and lowest number.*/
#include <stdio.h>
void average(int *);
int main()
{
    int a[8];
	int i;
    printf("Enter 8 Numbers:\n");
    for ( i = 0; i < 8; i++)
     {
          scanf("%d", &a[i]);
     }
	average(a);
	return 0;
}
void average(int *a)
{
	int i;
	int g;
	int l;
	float avg;
	int s = 0;
	for ( i = 0; i < 8; i++)
	{
		s = s + a[i];
		avg = avg + a[i];
		avg = s / 8.0;
	}
     printf("Sum of Array Elements = %d\n", s);
     printf("Average of Elements   = %.2f\n", avg);
     g = a[0];
     for ( i = 0; i < 8; i++)
          if (a[i] > g)
               g = a[i];
     printf("Greatest Element      = %d\n", g);
     l = a[0];
     for ( i = 0;i < 8; i++)
          if (a[i] < l)
               l = a[i];
     printf("Lowest Element        = %d\n", l);
}
