#include<stdio.h>

int main(){
    // Take the number as an input from the user
    int num;
    printf("Enter the number whose multiplication you need: \n");
    scanf("%d", &num);
    printf("Ok! The multiplication of %d is:\n", num);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d X %d = %d\n", num, i+1, num*(i+1));
    // }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num*(i));
    }
    
    
    return 0;
}