// call by refrence function
#include<stdio.h>

void ref(int *p, int *q);

int main(){
    int a = 5;
    int b = 8;

    printf("before calling the function, a = %d and b = %d\n", a, b);
    ref(&a, &b);
    printf("after calling the function, a = %d and b = %d\n", a, b);

    return 0;
}

void ref(int *p, int *q) {
    (*p)++;
    (*q)++;
    printf("Inside function *p = %d, *q = %d\n", *p, *q);
}