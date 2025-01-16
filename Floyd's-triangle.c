#include <stdio.h>

void floydsTriangle(int rows) {
    int num = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);
    floydsTriangle(rows);
    return 0;
}
