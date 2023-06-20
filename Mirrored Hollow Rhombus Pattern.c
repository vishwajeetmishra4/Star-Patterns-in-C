#include<stdio.h>

//this code is for online & some ofline compilers. 
// If needed, Kindly add "<conio.h>" & other required header files.


int main()  
{  
    int i,j,k,rows;  
    printf("Enter the number of rows :");  
    scanf("%d",&rows);  
    for(i=1;i<=rows;i++)  
    {  
        for(j=1;j<i;j++)  
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
