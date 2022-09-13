/*
Program to pass an array to a function
*/

#include<stdio.h>
void func(int val[]);
int main(){
    int i, arr[6] = {1, 2, 3, 4, 5, 6};
    func(arr);
    printf("contents of array are now : ");
    for (i = 0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void func(int val[]){
    int sum = 0, i;
    for (i = 0; i < 6; i++){
        val[i] = val[i] * val[i];
        sum += val[i];
    }
    printf("the sum of squares = %d\n", sum);
}