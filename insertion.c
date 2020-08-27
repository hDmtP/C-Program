#include<stdio.h>


void display(int arr[], int n){
  //Traversal
  for (int i = 0; i < n; i++)
  {
      printf("%d\n", arr[i]);
  }
  
}

int indInsertion(int arr[], int size, int element, int capacity, int index){
    //Code for insertion
      if(size>=capacity){
          return -1;
      }
      for (int i = size-1; i >= index; i--)
      {
          arr[i+1]=arr[i];
      }
      
    printf("Please enter any integer element: \n");
    scanf("%d", &element);
      arr[index]=element;
    //   return 1;
      
}

int main(){
    int arr[100]={1,2,3,78};
    int element, size=4, index=2;  
    display(arr, 4);
    indInsertion(arr, size, element, 100, index);
    
    size+=1;
    printf("Your new array: \n");
    display(arr, size);
    return 0;
}