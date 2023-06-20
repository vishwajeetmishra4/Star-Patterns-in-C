#include <stdio.h>
//this code is for online & some ofline compilers. 
// If needed, Kindly add "<conio.h>" & other required header files.

    int main(void) {  
      int i,j,k,rows;  
      printf("Enter the number of rows:");  
      scanf("%d",&rows);  
      int spaces=rows-1;  
      int stars=1;  
      for(i=1;i<=rows;i++)  
      {  
        for(j=1;j<=spaces;j++)  
        {  
          printf(" ");  
        }  
        for(k=1;k<=stars;k++)  
        {  
          printf("*");  
        }  
        if(spaces>i)  
        {  
          spaces=spaces-1;  
          stars=stars+2;  
        }  
        if(spaces<i)  
        {  
          spaces=spaces+1;  
          stars=stars-2;  
        }  
        printf("\n");  
      }  
      return 0;}  
