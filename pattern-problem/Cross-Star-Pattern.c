#include <stdio.h>

void crossStarPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1)
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

    printf("\nCross Star Pattern:\n");
    crossStarPattern(n);

    return 0;
}
