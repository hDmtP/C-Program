#include<stdio.h>

int returnMax(int array[], int n) {
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]>max) {
            max=array[i];
        }
    }

    return max;
}
int returnMin(int array[], int n) {
    int min=array[0];
        for (int i = 1; i < n; ++i)
        {
            if (array[i] < min) {
                min=array[i];
            }
        }
    return min;
}
int main() {
    int n;
    printf("Enter how many elements you need in your array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Well, choose your numbers respectively\n");
        scanf("%d", &a[i]);
    }
    
    int max=returnMax(a, n);
    int min=returnMin(a, n);
    printf("The maximum valued element in the array is: %d\n", max);
    printf("The minimum valued element in the array is: %d\n", min);
    return 0;
}