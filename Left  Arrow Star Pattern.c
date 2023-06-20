#include <stdio.h>  

//this code is for online & some ofline compilers. 
// If needed, Kindly add "<conio.h>" & other required header files.

      
    int main(void) {  
        
      int i,j,k,cols;  
      printf("Enter the number of columns:");  
      scanf("%d",&cols);  
      //printing the upper part of the pattern..  
     for(i=1;i<=cols;i++)  
     {  
       for(j=1;j<=cols-i;j++)  
       {  
           printf(" ");  
       }  
       for(k=0;k<=cols-i;k++)  
       {  
         printf("*");  
       }  
       printf("\n");  
     }  
    for(i=1;i<cols;i++)  
    {  
      for(j=1;j<i+1;j++)  
      {  
        printf(" ");  
      }  
      for(k=1;k<=i+1;k++)  
      {  
        printf("*");  
      }  
      printf("\n");  
    }  
      return 0;  
    }  
