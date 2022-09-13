/*
program to understand the use of realloc() function
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    if(ptr == NULL){
        printf("Memory not available");
        exit(1);
    }

    printf("Enter 5 integers : ");
    for (i = 0; i < 5; i++){
        scanf("%d", ptr + i);
    }
    /* allocate memory for 4 more integers */
    ptr = (int *)realloc(ptr, 9 * sizeof(int));
    if(ptr == NULL){
        printf("Memory not available");
        exit(1);
    }

    printf("Enter 4 more integers : ");

    for (i = 5; i < 9; i++){
        scanf("%d", ptr + i);
    }
    printf("Entered integers are : ");
    for (i = 0; i < 9; i++){
        printf("%d ", *(ptr + i));
    }

    return 0;
}

// free() is used to release the memory space allocated dynamically to prevent memory leak