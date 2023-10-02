#include <stdio.h>

void transposeMatrix(int mat[][100], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            // Swap mat[i][j] and mat[j][i]
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}

int main() {
    int n, i, j;
    
    printf("Enter the size of the square matrix (N): ");
    scanf("%d", &n);

    int mat[100][100]; // Assuming a maximum matrix size of 100x100

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Transpose the matrix
    transposeMatrix(mat, n);

    printf("The transpose of the matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

