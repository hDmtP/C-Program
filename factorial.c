#include<stdio.h>

/*
int factorialIterative(int n){
    int val=1;
    for (int i = n; i > 1; i--)
    {
        val *= i;
    }
    return val;
}
*/

int factorialRecursive(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorialRecursive(n-1);
    }
    
    
}

int main(){
    int n;
    printf("Enter the value of 'n'\n");
    scanf("%d", &n);
    // int factorial = factorialIterative(n);
    int factorial = factorialRecursive(n);
    printf("%d! = %d", n, factorial);
    return 0;
}