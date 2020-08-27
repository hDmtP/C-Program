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
    int arr[]={ 12, 1, 56, 789, 466, 456853, 84205, 7897 };
    int max=returnMax(arr, 8);
    int min=returnMin(arr, 8);
    printf("The maximum valued element in the array is: %d\n", max);
    printf("The minimum valued element in the array is: %d\n", min);
    return 0;
}