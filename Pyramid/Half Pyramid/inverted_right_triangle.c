#include <stdio.h>
int main()
{
    int n;
    int row=0,col=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("========================================\n");
    /******************************** Right Inverted Triangle Numbers ********************************************/
    /* Loop for each cloumn */
    for(row=0;row<n;row++)
    {
        /* Loop for white spaces */
        for(col=0;col<row;col++)
        {
            printf("  ");
        }
        /* Loop to Print " * " */
        for(col=0;col<n-row;col++)
        {
            printf("%d ",col+1);
        }
        printf("\n");
       
    }
    printf("========================================\n");
    /******************************** Right Inverted Triangle Alphabet ********************************************/
    /* Loop for each cloumn */
    for(row=0;row<n;row++)
    {
        /* Loop for white spaces */
        for(col=0;col<row;col++)
        {
            printf("  ");
        }
        /* Loop to Print " * " */
        for(col=0;col<n-row;col++)
        {
            printf("%c ",'A'+col);
        }
        printf("\n");
       
    }
    printf("========================================\n");

    /******************************** Right Inverted Triangle Stars ********************************************/
    /* Loop for each cloumn */
    for(row=0;row<n;row++)
    {
        /* Loop for white spaces */
        for(col=0;col<row;col++)
        {
            printf("  ");
        }
        /* Loop to Print " * " */
        for(col=0;col<n-row;col++)
        {
            printf("* ");
        }
        printf("\n");
       
    }
    return 0;
}