#include<stdio.h>
#define max 100
void seperate(int[],int);
void main()
{
    int a[max];
	int i;
	int n;
    printf("Enter the limit of array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
     {
         scanf("%d", &a[i]);
     }
    seperate(a,n);
}
void seperate(int a[max],int l)
{
     int p[max];
	int x = -1;
	int n[max];
	int y = -1;
	int z[max];
	int w = -1;
	int i = 0;
    for (i = 0; i < l; i++)
     {
          if ( a[i] > 0) 
          {
               x++;
               p[x] = a[i];
          }
          else
          {
               if ( a[i] < 0)
               {
                    y++;
                    n[y] = a[i];
               }
               else
               {
                    w++;
                    z[w] = a[i];
               }
           }
      }

      if ( x >= 0)
      {
           printf("\nThe positive array is: ");
           for (i = 0; i < x + 1; i++)
           {
                printf("%d ", p[i]);
           }
      }
      else
      {
            printf("\nArray is not have any positive value");
      }

      if ( y >= 0)
      {
            printf("\nThe negative array is: ");
            for ( i = 0; i < y + 1; i++)
            {
                 printf("%d ", n[i]);
            }
       }
       else
       {
             printf("\nArray does not have any negative value");
       }

      if ( w >= 0)
      {
            printf("\nThe zeros in array is: ");
            for (i = 0; i < w + 1; i++)
            {
                 printf("%d ", z[i]);
            }
      }
      else
      {
            printf("\nArray does not have any zeros value");
      }
}
