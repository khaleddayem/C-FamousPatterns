#include <stdio.h>
int main()
{
    int n;
    int row=0,col=0;
    int max_col;
    printf("Enter a Number : ");
    scanf("%d",&n);
    max_col=2*n-1;
    /*================= Pyramid Using Stars =======================*/
    printf("=========================\n");
    /* Loop for Number of Rows */
    for(row=0;row<n;row++)
    {
        /* Loop for white spaces */
        for(col = 0; col < 2 * (n - row) - 1; col++)
        {
            printf(" ");
        }
        /* Loop for triangle */
        for(int k = 0; k < 2 * row + 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("=========================\n");
    /*================= Pyramid Using Numbers =======================*/
    /* Loop for Number of Rows */
    for(row=0;row<n;row++)
    {
        /* Loop for white spaces */
        for(col = 0; col < 2 * (n - row) - 1; col++)
        {
            printf(" ");
        }
        /* Loop for triangle */
        for(int k = 0; k < 2 * row + 1; k++)
        {
            if(row>=k)
            {
                printf("%d ",row+1+k);
            }
            else
            {
                printf("%d ",(2*row)-(k-row-1));
            }
        }
        printf("\n");
    }
    printf("=========================\n");
    /*================= Pyramid Using Alphabets =======================*/
    /* Loop for Number of Rows */
    for(row=0;row<n;row++)
    {
        /* Loop for white spaces */
        for(col = 0; col < 2 * (n - row) - 1; col++)
        {
            printf(" ");
        }
        /* Loop for triangle */
        for(int k = 0; k < 2 * row + 1; k++)
        {
            if(row>=k)
            {
                printf("%c ",'A'+row+k);
            }
            else
            {
                printf("%c ",'A'+(2*row)-(k-row-1)-1);
            }
        }
        printf("\n");
    }
}