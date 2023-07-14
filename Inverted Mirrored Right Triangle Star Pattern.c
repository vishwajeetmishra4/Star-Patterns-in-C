#include <stdio.h>  

//this code is for online & some ofline compilers. 
// If needed, Kindly add "<conio.h>" & other required header files.

int main()  
    {  
        int i,j,k,rows,m;  
        printf("Enter the number of rows :");  
        scanf("%d",&rows);  
        m=rows;  
       for(i=1;i<=rows;i++)  
       {  
           for(j=1;j<i;j++)  
           {  
               printf(" ");  
           }  
           for(int k=1;k<=m;k++)  
           {  
               printf("*");  
           }  
           m--;  
         
          printf("\n");  
        }  
        return 0;  
    }  
