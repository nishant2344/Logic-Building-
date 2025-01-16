#include <stdio.h>

void zigZagPattern(int n) {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the width for the zig-zag pattern: ");
    scanf("%d", &n);
    zigZagPattern(n);
    return 0;
}
