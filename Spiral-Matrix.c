#include <stdio.h>

void spiralMatrix(int n) {
    int matrix[n][n];
    int value = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= n * n) {
        for (int i = left; i <= right; i++) // Top row
            matrix[top][i] = value++;
        top++;

        for (int i = top; i <= bottom; i++) // Right column
            matrix[i][right] = value++;
        right--;

        for (int i = right; i >= left; i--) // Bottom row
            matrix[bottom][i] = value++;
        bottom--;

        for (int i = bottom; i >= top; i--) // Left column
            matrix[i][left] = value++;
        left++;
    }

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the spiral matrix (n x n): ");
    scanf("%d", &n);
    spiralMatrix(n);
    return 0;
}
