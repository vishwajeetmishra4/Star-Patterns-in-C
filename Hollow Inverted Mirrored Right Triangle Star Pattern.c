#include <stdio.h>  
      
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
           for(k=1;k<=m;k++)  
           {  
              if(i==1 || k==1 || k==m)  
               printf("*");  
               else  
               printf(" ");  
           }  
           m--;  
         
          printf("\n");  
        }  
        return 0;  
    }  