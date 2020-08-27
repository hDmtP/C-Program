#include <stdio.h>

int main()
{
    int n,user;
    printf("Hey there! Enter any integer value to print b to s star pattern\n");
    scanf("%d", &n);
    printf("press 0 to print inverted pyramind star pattern or 1 for vice-versa:\n");
    scanf("%d", &user);
    if (user==0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i <= j)
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
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i + j >= (n - 1))
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

    }   

    return 0;
}