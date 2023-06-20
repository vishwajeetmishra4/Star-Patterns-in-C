#include <stdio.h>  
      
    int main(void) {  
      int i,j,num;  
      printf("Enter the odd number only :");  
      scanf("%d", &num);  
      for(i=1;i<=num;i++)  
      {  
        if(i==((num/2)+1))  
        {  
          for(j=1;j<=num;j++)  
          {  
            printf("+");  
          }  
       
        }  
        else  
        {  
        for(j=1;j<=num/2;j++)  
        {  
          printf(" ");  
        }  
        printf("+");  
        }  
        printf("\n");  
      }  
      return 0;  
    }  