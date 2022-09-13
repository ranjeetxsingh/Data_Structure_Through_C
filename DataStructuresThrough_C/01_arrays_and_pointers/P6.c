// Program for multiplication of two matrices

#include<stdio.h>

int main(){
    int row1, row2, col1, col2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("enter first matrix elements: ");
    int mat1[row1][col1];
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &row2, &col2);
    printf("enter second matrix elements: ");
    int mat2[row2][col2];
    for (int i = 0; i < row2; i++){
        for (int j = 0; j < col2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }


    printf("first matrix is: \n");
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col1; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("second matrix is: \n");
    for (int i = 0; i < row2; i++){
        for (int j = 0; j < col2; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    if(col1 != row2){
        printf("Multiplaction not possible");
        return 0;
    }

    int mulMat[row1][col2];

    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            mulMat[i][j] = 0;
            for (int k = 0; k < col1; k++){
                mulMat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("The resultant matrix is : \n");
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            printf("%d ", mulMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}