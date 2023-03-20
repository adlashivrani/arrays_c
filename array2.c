#include<stdio.h>  
void traversal(int *);
int main()
{          
	int array[5] = {20,30,40,50,60};//declaration and initialization of array    
	traversal(array);
	return 0;  
}  
void traversal(int *array)
{	
	int i;
	for(i = 0; i < 5; i++)
	{
       printf("%d \n", array[i]);
    }
}
