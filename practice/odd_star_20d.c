#include<stdio.h>

int main(){
    /*
    int n=3;
    for (int i = 1; i <= n; i++)
    {
        printf(" ");
        for (int j = 0; j < ((2*i)-1); j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    */
   int n;
    printf("Hey there! Enter any integer value to print s to l py star pattern\n");
    scanf("%d", &n);
    for (int i = 0; i < (n/2)+1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((2*i)+j>=(n-1))
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