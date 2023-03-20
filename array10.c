#include<stdio.h>
#define MAX 20
void convert(int);
int main()
{
    int n;
	int i;
    printf("Enter a decimal number= ");
    scanf("%d", &n);
    convert(n);
    return 0;
}
void convert(int n)
{
    int a[MAX];
	int i;
	int j;
	int rem;
    i = 0;
    while (n!=0)
    {
          rem = n % 8;
          a[i] = rem;
          i++;
          n = n / 8;
    }
    printf("\nThe octal number is= ");
    for (j = i - 1; j >= 0; j--)
     {
           printf("%d", a[j]);  
     }
}
