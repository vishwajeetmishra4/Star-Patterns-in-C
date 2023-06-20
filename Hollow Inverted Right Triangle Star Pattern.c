#include <stdio.h>  

//this code is for online & some ofline compilers. 
// If needed, Kindly add "<conio.h>" & other required header files.

      
    int main()  
    {  
        int i,j,rows;  
        printf("Enter the number of rows :");  
        scanf("%d",&rows);  
        for(i=rows;i>=1;i--)  
        {  
          for(j=1;j<=i;j++)  
          {  
             if(j==1 || j==i || i==rows)  
              printf("*");  
              else  
              printf(" ");  
          }  
          printf("\n");  
        }  
        return 0;  
    }  
