#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square pattern: ");
    scanf("%d", &n);

    // Loop for rows
    for (int i = 0; i < n; i++) {
        // Loop for columns
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
