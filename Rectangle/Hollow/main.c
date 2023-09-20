#include <stdio.h>
int main()
{
    int n;
    int row=0,col=0;
    int num=0;
    int chaar=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    /******** PATTERN USING STARS ********/
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            /* Shape boundary check */
            if(col==0||row==0||row==n-1||col==n-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    printf("===============================\n");
    /******** PATTERN USING NUMBERS ********/
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            /* Shape boundary check */
            if(col==0||row==0||row==n-1||col==n-1)
            {
                printf("%02d ",num++);
            }
            else
            {
                printf("   ");
            }
            
            
        }
        printf("\n");
    }
    printf("===============================\n");
    /******** PATTERN USING ALPHABET ********/
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            /* Shape boundary check */
            if(col==0||row==0||row==n-1||col==n-1)
            {
                printf("%c ",'A'+ (chaar++));
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
}