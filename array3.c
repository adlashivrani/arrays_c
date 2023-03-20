#include<stdio.h>    
void sort(int *);
int main ()    
{         
    int array[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};     
	sort(array);
	return 0;
}
void sort(int *array)
{
	int i;
	int j;
	int temp;
    for(i = 0; i<10; i++)    
    {    
        for(j = i+1; j < 10; j++)    
        {    
            if(array[j] < array[i])    
            {    
                temp = array[i];    
                array[i] = array[j];    
                array[j] = temp;     
            }     
        }     
    }    
	printf("Printing Sorted Element List ...\n");    
    for(i = 0; i<10; i++)    
    {    
        printf("%d\n",array[i]);    
    }    
} 

