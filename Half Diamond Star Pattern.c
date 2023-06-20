#include <stdio.h> 
//this code is for online & some ofline compilers. 
// If needed, Kindly add "<conio.h>" & other required header files.

      
    int main()  
    {  
        int i,j,k,cols,m=1;  
        printf("Enter the number of columns:");  
        scanf("%d",&cols);  
    for(i=1;i<=cols;i++)  
    {  
      for(j=1;j<=i;j++)  
      {  
        printf("*");  
      }  
      printf("\n");  
    }  
     for(i=cols-1;i>=1;i--)  
     {  
       for(j=1;j<=i;j++)  
       {  
         printf("*");  
       }  
       printf("\n");  
     }    
         
        return 0;  
    }  
