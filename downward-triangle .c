#include <stdio.h>

void downwardTrianglePattern(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\nDownward Triangle Pattern:\n");
    downwardTrianglePattern(n);

    return 0;
}
