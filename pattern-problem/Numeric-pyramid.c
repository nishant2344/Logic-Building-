#include <stdio.h>

void numericPyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++)
            printf(" ");
        int num = 1;
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d", num);
            if (j < i)
                num++;
            else
                num--;
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the numeric pyramid: ");
    scanf("%d", &rows);
    numericPyramid(rows);
    return 0;
}
