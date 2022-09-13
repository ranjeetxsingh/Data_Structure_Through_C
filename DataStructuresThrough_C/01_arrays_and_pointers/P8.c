// Program to print the value and address of the elements of an array
#include<stdio.h>
int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int i;
    for (i = 0; i < 6; i++){
        printf("value of arr[%d] = %d\t", i, arr[i]);
        printf("Address of arr[%d] = %p\n", i, &arr[i]);
    }

    return 0; 
}