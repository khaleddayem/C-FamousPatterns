#include <stdio.h>
 /*
    * FOR ALPHABET REPLACE printf("%d ",col+1);
    * WITH printf("%C ",'A'+1);
*/
int main()
{
  
    int n;
    int row=0,col=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("========================================\n");
    /******************************** Right Triangle ********************************************/
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            /* Shape boundary Check */
            /* Equation to get the Diagonal wanted */
            if(col==n-1||row==n-1||col==(-1*row)+(n-1))
            printf("%d ",col+1);
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("========================================\n");
    /******************************** Right Inverted Triangle ********************************************/
    /* Loop for each cloumn */
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            /* Shape boundary Check */
            if(col==n-1||row==0||row==col)
            printf("%d ",col+1);
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("========================================\n");    
    /******************************** Right Triangle ********************************************/
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            /* Shape boundary Check */
            /* Equation to get the Diagonal wanted */
            if(col==n-1||row==n-1||col==(-1*row)+(n-1))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("========================================\n");
    /******************************** Right Inverted Triangle ********************************************/
    /* Loop for each cloumn */
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            /* Shape boundary Check */
            if(col==n-1||row==0||row==col)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("========================================\n");
    return 0;
}