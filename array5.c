#include <stdio.h> 
void TwoDarray(int array[3][3]);
void main ()    
{    
    int array[3][3];
	int i;
	int j;     
    for (i = 0; i < 3; i++)    
    {    
        for (j = 0; j < 3; j++)    
        {    
            printf("Enter a[%d][%d]: ", i, j);                
            scanf("%d", &array[i][j]);    
        }    
    }
	TwoDarray(array); 
}   
void TwoDarray(int array[3][3])
{
 	int i;
	int j;
    printf("\n printing the elements ....\n");     
    for(i = 0; i < 3; i++)    
   	 {    
        printf("\n");     
        for (j = 0; j < 3; j++)    
        	{    
            	printf("%d\t", array[i][j]);    
        	}	        
	 }
}    	
