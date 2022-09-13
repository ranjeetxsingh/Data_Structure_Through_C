// call by value functions
#include<stdio.h>

void value(int x, int y);
int main(){
    int a = 5, b = 8;
    printf("before calling the function, a = %d and b = %d\n", a, b);
    value(a, b);
    printf("after calling the function, a = %d and b = %d\n", a, b);

    return 0;
}

void value(int x, int y) {
    x++;
    y++;
    printf("Inside function x = %d, y = %d \n", x, y);
}