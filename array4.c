#include<stdio.h> 
void largest(int *, int); 
int main ()  
{  
    int array[100];
	int i;
	int num;  
    printf("Enter the size of the array");  
    scanf("%d", &num);  
    printf("Enter the elements of the array?");  
    for(i = 0; i < num; i++)  
    {  
        scanf("%d", &array[i]);  
    }
	largest(array,num);
	return 0;
}
void largest(int *array, int num)
{
	int i;
	int largest;
	int sec_largest;  
    largest = array[0];  
    sec_largest = array[1];  
    for(i = 0;i < num; i++)  
    {  
        if(array[i] > largest)  
        {  
            sec_largest = largest;  
            largest = array[i];  
        }  
        else if (array[i] > sec_largest && array[i]!=largest)  
        {  
            sec_largest = array[i];  
        }  
    }  
    printf("largest = %d, second largest = %d", largest, sec_largest);  
      
}  
