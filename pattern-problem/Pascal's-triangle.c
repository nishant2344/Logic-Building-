#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

void pascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    pascalsTriangle(rows);
    return 0;
}
