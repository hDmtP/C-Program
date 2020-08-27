#include<stdio.h> 
 
int main(){ 
    int i,j,n,max; 
    printf("How many bars do you want?\n");
    scanf("%d", &n); 
    int a[n]; 
 
    //input array elements 
    for(i=0;i<n;i++){ 
        printf("Well, choose the numbers respectively\n");
        scanf(" %d", &a[i]); 
    } 
 
    max = a[0];     //init 'max' 
    printf("Here it is....\n");
    //getting max element of all 
    for(i=1;i<n;i++){ 
        if(a[i] > max){ 
            max = a[i]; 
        } 
    } 

    //TRADITIONAL CODE, but with some changes in both loop count 
    for(i=0;i<max;i++){ 
        for(j=0;j<n;j++){ 
            if(a[j]+i >= max){ 
                printf("* "); 
            }else{ 
                printf("  "); 
            } 
        } 
        printf("\n"); 
    } 
    return 0; 
} 