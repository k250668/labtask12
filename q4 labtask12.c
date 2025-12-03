#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("\nArray created with calloc (initial values):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nModifying values...\n");
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("Array after modification:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
int m;
    printf("\n\nEnter size of second array: ");
    scanf("%d", &m);

    arr = (int *)malloc(m * sizeof(int)); 

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nArray created with malloc (garbage values):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }

    free(arr);

    return 0;
}

