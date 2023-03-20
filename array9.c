#include<stdio.h>
#define MAX 20
void frequency(int [],int);
int main()
{
    int a[MAX];
	int n;
	int i;
    printf("Enter limit of array: \n");
    scanf("%d", &n);
    printf("\nEnter array:\n ");
    for ( i = 0; i < n; i++)
     {
          scanf("%d", &a[i]);
     }
    frequency(a,n);
    return 0;
}
void frequency(int a[],int n)
{
    int i;
	int j;
	int k;
	int num;
	int c = 0;
    for (i = 0; i < n; i++)
     {
          num = a[i];
          c = 1;
          for (j = i + 1; j < n; j++)
          {
               if (a[j] == num) 
               {
                    c++;
                    for (k = j; k < n; k++)
                    {
                         a[k] = a[k+1];
                    }
                    n--;
                    j--;
               } 
          }
          printf("\nthe frequency of element %d  is %d\n", a[i], c);
     }
}
