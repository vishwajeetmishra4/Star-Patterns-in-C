#include <stdio.h> 

//this code is for online & some ofline compilers. 
// If needed, Kindly add "<conio.h>" & other required header files.

      
    int main()  
    {  
        int i,j,k,rows;
        int m=1;  
        printf("Enter the number of rows :");  
        scanf("%d",&rows);  
        for(i=rows;i>=1;i--)  
        {  
            for(j=1;j<=i-1;j++)  
            {  
              printf(" ");  
            }  
            for(k=1;k<=m;k++)  
            {  
               if(k==1 || k==m || m==rows)  
                printf("*");  
                else  
                printf(" ");  
            }  
            printf("\n");  
            m++;  
        }  
        return 0;  
    }   
