#include <stdio.h>

void hollowPyramidPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\nHollow Pyramid Pattern:\n");
    hollowPyramidPattern(n);

    return 0;
}
