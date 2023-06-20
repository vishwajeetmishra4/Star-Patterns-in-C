
#include <stdio.h>

//this code is for online & some ofline compilers. 
// If needed, Kindly add "<conio.h>" & other required header files.

int main()
{
    int i,j,rows;
    printf("Enter the Number of rows :");
    scanf("%d",&rows);
    
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
