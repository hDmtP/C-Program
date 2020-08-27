#include<stdio.h>

int reverse(int num){
    int rev=0, rem;
    while (num!=0)
    {
        rem = num%10; //last digit of num
        rev = rev*10 + rem; //will generate a num with rem as last digit
        num = num/10;

    }
    return rev;
    
}

int main(){
    int num;
    printf("Enter any numerical number(except 0):\n");
    scanf("%d", &num);
    int rev=reverse(num);
    printf("The reversed number is %d", rev);
    return 0;
}