/*
program to find the largest and the smallest number in an array
*/

#include<stdio.h>
int main(){
    int i, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int small, large;
    small = large = arr[0];

    for (i = 1; i < 10; i++){
        if(small > arr[i])
            small = arr[i];
        if(large < arr[i])
            large = arr[i];
    }

    printf("Smallest = %d , Largest = %d\n", small, large);

    return 0;
}