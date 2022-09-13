/*
Program to input and display a matrix
*/

#include<stdio.h>

int main(){
    int row, col;
    printf("input no. of rows: ");
    scanf("%d", &row);
    printf("input no. of columns: ");
    scanf("%d", &col);
    int mat[row][col];
    printf("enter matrix elements: ");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);
    }
    printf("The matrix that you have entered is: \n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}