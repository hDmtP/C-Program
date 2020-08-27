
#include <stdio.h>

int main()
{
    int i, j, input, res;
    printf("Press 0 to print tringular pattern and 1 for reverse tringular pattern: \n");
    scanf("%d", &input);
    
    printf("Enter number of rows to print in pattern: ");
    scanf("%d", &res);
    const int rest = res;
    
    if (input == 0)
    {
        for(i=1;i<=res;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        
    }
    else
    {
        for(i=1;i<=rest;i++)
        {
            res--;
            for(j=1;j<=res+1;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        
    }

    return 0;
}