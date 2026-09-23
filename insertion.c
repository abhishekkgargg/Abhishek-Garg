#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40};
    int n = 4, pos, value, i;

    /* Insert 25 at index 2 */
    pos = 2;
    value = 25;

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;

    /* Delete element at index 3 */
    pos = 3;

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    /* Traverse and print */
    printf("Array after insertion and deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}