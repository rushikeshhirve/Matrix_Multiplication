#include <stdio.h>

int main()
{ 
    int sum=0,r1,c1,r2,c2;
    printf("Enter the no. of rows and no of coloums in 1st Matrix :");
    scanf("%d%d",&r1,&c1);
    printf("Enter the no. of rows and no of coloums in 2st Matrix :");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2],result[r1][c2];
    if(c1 != r1)
    {
        printf("You Entered 'INVALID MATRIX' dimensions.");
        goto end;
    }
    else
    {
    printf("(NOTE :Enter the Matrix number row wise & put space between two numbers)\n");
    printf("Enter the 1st Matrix :");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the 2st Matrix :");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("1st matrix is :\n"); 
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("2st matrix is :\n");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("The Multplication of matrix is :\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            for (int k = 0; k < c1; k++) 
            {
                sum += a[i][k]*b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    }
    //printf("Hello World");
    end:
    return 0;
}
