#include<stdio.h>

int main(){
    int n, i=0;
    printf("Enter any Integer Number: \n");
    scanf("%d", &n);
    
    
    while (n!=0)
        {
            n/=10;
            i++;
        }
        printf("No. of digits entered by the user= %d", i);
    
    
    return 0;
}