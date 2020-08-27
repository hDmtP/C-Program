#include<stdio.h>


void display(int arr[], int n){
  //Traversal
  for (int i = 0; i < n; i++)
  {
      printf("%d\n", arr[i]);
  }
  
}

void indDeletion(int arr[], int size, int element, int capacity, int index){
    //Code for deletion
      
      for (int i = index; i < size-1; i++)
      {
          arr[i]=arr[i+1];
      }
      
    // printf("Please enter any integer element: \n");
    // scanf("%d", &element);
    //   arr[index]=element;
    //   return 1;
      
}

int main(){
    int arr[100]={1,2,3,78};

    int element=45, size=4, index;

    display(arr, 4);

    printf("Enter the index number at which you want to delete the element\n");
    printf("[choose between 0-3]\n");

    scanf("%d", &index);

    indDeletion(arr, size, element, 100, index);
    
    size -= 1;

    printf("Your new array: \n");

    display(arr, size);

    return 0;   
}