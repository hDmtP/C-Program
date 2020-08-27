#include <stdio.h> 
#include <stdlib.h> 
int main ( ){ 
 char* name = malloc(1*sizeof(char)); // allocating minmum size  
 int size = scanf("%s", name); 
 name = realloc(name, size*sizeof(char)); // new size according to the user input 
 if (!name) printf("not enough space in memory to expand or user putting some huge amount of data"); 
 else printf(name); 
 printf("\n"); 
 return 0; 
} 