#include <stdio.h>  
      
    int main(void) {  
      int i,j,num,m;  
      printf("Enter the number :");  
      scanf("%d",&num);  
      m=2*num-1;  
      for(i=1;i<=m;i++)  
      {  
        for(j=1;j<=m;j++)  
        {  
           if(i==j || j==(m-i+1))  
           {  
             printf("*");  
           }  
           else  
           {  
             printf(" ");  
           }  
        }  
        printf("\n");  
      }  
      return 0;  
    }  