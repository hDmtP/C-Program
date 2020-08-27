#include<stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the last natural number of which the sum you want\n");
    scanf("%d", &n);
    // Runs in linear time
    // for (int i = 1; i <= n; i++)
    // {
    //     sum+=i;
    // }
    // Runs in constant time
    sum = (n*n+n)/2;
    printf("Sum of first %d natural numbers is:%d", n, sum);
    return 0;
}