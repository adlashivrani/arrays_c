/*linear search*/
#include <stdio.h>
void search(int*, int);
int main()
{
    int a[8];
	int i; 
	int n;
    printf("Enter 8 Numbers:\n");
    for (i = 0;i < 8; i++)
          scanf("%d", &a[i]);
    printf("Enter Number to be Searched : ");
    scanf("%d", &n);
	search(a,n);
	return 0;
}
void search(int *a, int n)
{
	int i;
	int c = 0;
     for ( i = 0; i < 8; i++)
     {
          if (n == a[i])
          {
               printf("\nNumber '%d' Found at Position %d.", n, i + 1);
               c = c + 1;
          }
     }
     if (c == 0)
          printf("\nNumber '%d'is Not Found.", n);
}
