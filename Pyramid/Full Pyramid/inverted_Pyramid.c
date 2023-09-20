#include <stdio.h>
int main()
{
    int n;
    int row=0,col=0;
    int max_col;
    printf("Enter a Number : ");
    scanf("%d",&n);
    max_col=2*n-1;
    printf("=========================\n");
    /*================= Inverted Pyramid Using Stars =======================*/
    /* Loop for Number of Rows */
    for(row=0;row<n;row++)
    {
        for(col=0;col<row+1;col++)
        {
            printf("  ");
        }
        for(int k=0;k<max_col-(2*row);k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("=========================\n");
    /*================= Inverted Pyramid Using Numbers =======================*/
    /* Loop for Number of Rows */
    for(row=0;row<n;row++)
    {
        for(col=0;col<row+1;col++)
        {
            printf("  ");
        }
        for(int k=0;k<max_col-(2*row);k++)
        {
            printf("%d ",row+1);
        }
        printf("\n");
    }
    printf("=========================\n");
    /*================= Inverted Pyramid Using Alphabets =======================*/
    /* Loop for Number of Rows */
   for(row=0;row<n;row++)
    {
        for(col=0;col<row+1;col++)
        {
            printf("  ");
        }
        for(int k=0;k<max_col-(2*row);k++)
        {
            printf("%c ",'A'+row);
        }
        printf("\n");
    }
}