#include <stdio.h>
int main()
{
    int n;
    int row=0,col=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("========================================\n");
    /******************************** Left Triangle Numbers ********************************************/
    for(row=0;row<n;row++)
    {
        /* Loop to Print " * " */
        for(col=0;col<row+1;col++)
        {
            printf("%d ",col+1);
        }
        printf("\n");
    }
    printf("========================================\n");
    /******************************** Left Triangle Alphabet ********************************************/
    for(row=0;row<n;row++)
    {
        /* Loop to Print " * " */
        for(col=0;col<row+1;col++)
        {
            printf("%c ",'A'+col);
        }
        printf("\n");
    }
    printf("========================================\n");
    /******************************** Left Triangle Stars ********************************************/
    for(row=0;row<n;row++)
    {
        /* Loop to Print " * " */
        for(col=0;col<row+1;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}