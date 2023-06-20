#include <stdio.h> 

//this code is for online & some ofline compilers. 
// If needed, Kindly add "<conio.h>" & other required header files.

      
    int main(void) {  
        
      int i,j,k,cols;  
      printf("Enter the number of columns :");  
      scanf("%d",&cols);  
      //printing the upper  part of the pattern.  
     for(i=0;i<cols;i++)  
     {  
       for(j=0;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(k=1;k<=cols-i;k++)  
       {  
         printf("*");  
       }  
       printf("\n");  
     } 
     //printing the lower  part of the pattern.
    for(i=1;i<cols;i++)  
    {  
      for(j=1;j<cols-i;j++)  
      {  
        printf(" ");  
      }  
      for(int k=1;k<=i+1;k++)  
      {  
        printf("*");  
      }  
      printf("\n");  
    }  
      return 0;  
    }  
