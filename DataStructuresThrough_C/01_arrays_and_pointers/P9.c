// program to print the value and address of elements using the pointer notation
#include<stdio.h>

int main(){
    int i, arr[5] = {5, 10, 15, 20, 25};
    for (i = 0; i < 5; i++){
        printf("value of arr[%d] = %d\t", i, *(arr + i));
        printf("Address of arr[%d] = %p\n", i, arr + i);
    }
    return 0;
}