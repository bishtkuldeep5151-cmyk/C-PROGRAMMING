#include<stdio.h>
int main(){
    int A[2][2], B[2][2], C[2][2];
    int rows, columns;
    int i,j;

    printf("Enter the number of rows and columns for the matrices (2x2): ");
    scanf("%d %d", &rows, &columns);

    printf("enter the elements of the first matrix;\n");
    for(i=0; i<rows;i++){
        for(j=0;j<columns;j++){
        scanf("%d",&A[i][j]);
        }
    }




    printf("enter the elements of the second matrix;\n");
    for(i=0; i<rows;i++){
        for(j=0;j<columns;j++){
        scanf("%d",&B[i][j]);
        }
    }

    for(i=0; i<rows;i++){
        for(j=0;j<columns;j++){
        C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for(i=0; i<rows;i++){
        for(j=0;j<columns;j++){



        printf("%d ", C[i][j]);
        }
        printf("\n");
    }
        return 0;

}