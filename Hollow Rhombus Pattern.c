#include <stdio.h>  
    
      
int main()  
{  
    int i,j,k,rows;  
    printf("Enter the number of rows :");  
    scanf("%d",&rows);  
    for(i=rows;i>=1;i--)  
    {  
        for(j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for(k=1;k<=rows;k++)  
        {  
           if(i==1 || i==rows || k==1 || k==rows)  
            printf("*");  
            else  
            printf(" ");   
        }  
        printf("\n");  
    }  
    return 0;  
}  