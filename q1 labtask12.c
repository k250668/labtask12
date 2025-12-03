#include <stdio.h> 
int main() {
	 int n;
	 int i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter %d integers: ", n);
    for ( i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements: ");
    for ( i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
}
