#include<stdio.h>
#include<math.h>

int main(){
    int n,a[10],rem,i=0;
    int sum=0;
    printf("Enter a binary digit: ");
    scanf("%d", &n);
    while (n)
    {
        rem=n%10;
        n/=10;
        a[i]=rem;
        sum+=rem*pow(2,i);
        i++;
       
    }
    printf("sum = %d", sum);
   
    return 0;
}