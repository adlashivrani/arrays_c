/*Write a program to accept five integer elements in an array and print odd numbers.*/
#include <stdio.h>
void odd(int *);
int main()
{
    int a[5];
	int i;
    printf("Enter 5 Numbers:\n");
    /*For accepting 5-integer numbers from user*/
    for (i = 0; i < 5; i++)
          scanf("%d", &a[i]);
	odd(a);
	return 0;
}
void odd(int *a)
{
	int i;
    printf("Odd Numbers in Array are:\n");
    for (i = 0;i < 5; i++)
          if (a[i] % 2 != 0) //Check number is odd
               printf("%d ", a[i]);
}
