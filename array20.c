/*C program to read an array of 7 integer numbers and sort it in ascending order.*/
#include <stdio.h>
void sort(int *);
int main()
{
    int a[7];
	int i;
	int j;
    printf("Enter 7 Numbers:\n");
    for ( i = 0; i < 7; i++)
          scanf("%d", &a[i]);
	sort(a);
	return 0;
}
void sort(int *a)
{
	int i;
	int j;
	int t;
     for (i = 0; i < 6; i++)
          for (j = i + 1;j < 7; j++)
               if (a[i] > a[j])
               {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
               }
     printf("\nNumbers in Ascending Order:\n");
     for (i = 0; i < 7; i++)
          printf("%d ", a[i]);
}
