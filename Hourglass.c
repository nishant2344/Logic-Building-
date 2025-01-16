#include <stdio.h>

void hourglassPattern(int n) {
    // Top half
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
    // Bottom half
    for (int i = 2; i <= n; i++) {
        for (int j = n; j > i; j--)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the height of the hourglass: ");
    scanf("%d", &n);
    hourglassPattern(n);
    return 0;
}
