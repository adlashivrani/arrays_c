/*Write a C program to take the input into an array and reverse the element of the array*/
#include<stdio.h>
#include<stdlib.h>
void reverse(int);
int main()
{
    int n;
    printf("Enter total number of elements to reverse: ");
    scanf("%d", &n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    int *p;
	int tmp;
	int i;
    p = ((int *)malloc(n*sizeof(int)));
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p+i));
    }
    for ( i = 0; i < n / 2; i++)
    {
        tmp = *(p+i);
        *(p+i) = *(p+n-1-i);
        *(p+n-1-i) = tmp;
    }
    printf("\n The reversed array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p+i));
    }
}
