#include<stdio.h>

int main(){
    int n;
    printf("Enter any integer: \n");
    scanf("%d", &n);
    int isPrime=1;

    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            isPrime=0;
        }
        
    }
    
    
    
    if (isPrime)
    {
        printf("prime\n");
    }
    else
    {
        printf("nop\n");
    }
    
    return 0;
}