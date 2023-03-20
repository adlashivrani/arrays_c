#include<stdio.h>
int *getarray(int *);
int main()  
{  
  int *n;  
  int a[5];  
  n=getarray(a);  
  printf("\nElements of array are :\n");  
  for(int i=0;i<5;i++)  
    {  
        printf("%d\t", n[i]);  
    }  
    return 0;  
}  
int *getarray(int *a)  
{  
    
    printf("Enter the elements in an array : ");  
    for(int i=0;i<5;i++)  
    {  
        scanf("%d", &a[i]);  
    }  
    return a;  
}   
