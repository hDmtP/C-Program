#include<stdio.h>

int main(){
    int n,i,j,max;
    printf("How many bars do you want?\n");
    scanf("%d", &n);
    int a[n];

    // input array element
    for ( i = 0; i < n; i++)
    {
        printf("Well, choose your numbers respectively\n");
        scanf("%d", &a[i]);
    }
    
    printf("Here it is!\n");
    // getting max element of all
    max=a[0];

    for ( i = 1; i < n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }
    // key code to reverse my bar graph
    for ( i = 0; i < n; i++)
    {
        a[i]=max+1-a[i];
    }
    

    // code that will solve the problem
    for ( i = 0; i < max; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (a[j]+i <= max)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
            
        }
        printf("\n");
        
    }
    
    


    return 0;
}