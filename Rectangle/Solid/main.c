#include <stdio.h>
int main()
{
    int n;
    int row=0,col=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    /******** PATTERN USING STARS ********/
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("===============================\n");
    /******** PATTERN USING NUMBERS ********/
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
    printf("===============================\n");
    /******** PATTERN USING ALPHABET ********/
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("%c ",'a'+row);
        }
        printf("\n");
    }
}