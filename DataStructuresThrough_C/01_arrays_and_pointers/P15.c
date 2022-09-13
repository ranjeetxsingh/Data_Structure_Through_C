/*
when an array is passed to a function, the receiving argument is declared as a pointer
*/

#include<stdio.h>

void func(float f[], int *i, char c[5]);

int main(){
    float f_arr[5] = {1.4, 2.5, 3.7, 4.1, 5.9};
    int i_arr[5] = {1, 2, 3, 4, 5};
    char c_arr[5] = {'a', 'b', 'c', 'd', 'e'};
    printf("Inside main() : ");
    printf("size of f_arr = %u\t", sizeof(f_arr));
    printf("size of i_arr = %u\t", sizeof(i_arr));
    printf("size of c_arr = %u\n", sizeof(c_arr));
    func(f_arr, i_arr, c_arr);

    return 0;
}

void func(float f[], int *i, char c[5]){
    printf("Inside func() : ");
    printf("size of f = %u\t", sizeof(f));
    printf("size pf i = %u\t", sizeof(i));
    printf("size of c = %u", sizeof(c));
}