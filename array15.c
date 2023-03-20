/*C program to read any 10 integers and check if sum of first 5-elements is equal to sum of last 5-elements or not*/
#include <stdio.h>
void array(int *);
int main()
{
    int a[10];
	int i;
    printf("Enter 10 Numbers:\n\n");
    for ( i = 0; i < 10; i++)
     {
          scanf("%d", &a[i]);
     }
	array(a);
	return 0;
}
void array(int *a)
{
	int i;
	int s1 = 0;
	int s2 = 0;
     for (i = 0; i < 5; i++)
     {
          s1 = s1 + a[i];
     }
     for (i = 5; i < 10; i++)
     {
          s2 = s2 + a[i];
     }
     printf("\nSum of First 5 Numbers: %d\n\nSum of Last 5 Numbers : %d\n", s1, s2);
     if (s1 == s2)
          printf("\nSum is Equal");
     else
          printf("\nSum is NOT Equal");
}
