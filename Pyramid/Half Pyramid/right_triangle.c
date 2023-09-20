#include <stdio.h>
int main()
{
    int n;
    int row=0,col=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("========================================\n");
    /******************************** Right Triangle Numbers ********************************************/
    /* Loop for each cloumn */
    for(row=0;row<n;row++)
    {
        /* Loop for white spaces */
        for(col=row;col<n-1;col++)
        {
            printf("  ");
        }
        /* Loop to Print " * " */
        for(col=0;col<row+1;col++)
        {
            printf("%d ",col+1);
        }
        printf("\n");
       
    }
    printf("========================================\n");
    /******************************** Right Triangle Alphabet ********************************************/
    /* Loop for each cloumn */
    for(row=0;row<n;row++)
    {
        /* Loop for white spaces */
        for(col=row;col<n-1;col++)
        {
            printf("  ");
        }
        /* Loop to Print " * " */
        for(col=0;col<row+1;col++)
        {
            printf("%c ",'A'+col);
        }
        printf("\n");
       
    }
     printf("========================================\n");
    /******************************** Right Triangle Stars ********************************************/
    /* Loop for each cloumn */
    for(row=0;row<n;row++)
    {
        /* Loop for white spaces */
        for(col=row;col<n-1;col++)
        {
            printf("  ");
        }
        /* Loop to Print " * " */
        for(col=0;col<row+1;col++)
        {
            printf("* ");
        }
        printf("\n");
       
    }
    return 0;
}