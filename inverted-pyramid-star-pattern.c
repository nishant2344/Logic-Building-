#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    for (int i = rows; i >= 1; i--) {
        for (int space = 0; space < rows - i; space++) {
            printf(" ");
        }
        for (int star = 0; star < 2 * i - 1; star++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
