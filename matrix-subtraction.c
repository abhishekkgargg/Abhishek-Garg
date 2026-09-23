#include <stdio.h>

int main() {
    int a[2][2] = {{10, 20}, {30, 40}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int result[2][2];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Matrix subtraction:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}