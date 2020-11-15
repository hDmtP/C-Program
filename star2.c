#include<stdio.h>

int main(){
    int n;
    printf("Hey there! Enter any integer value to print s to l py star pattern\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j>=(n-1))
            {
                printf("* ");      
            }
            else
            {
                printf(" "); 
            }
            
        }
        printf("\n");
    }
    
    return 0;
}

/*
try for(int j=0; j>=n-i-1; j++)
*/
