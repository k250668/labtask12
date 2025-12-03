#include <stdio.h> 
#include <stdlib.h>
 #include <string.h>
void reverseString(char *arr, char *rev) {
    if (*arr == '\0') {
        *rev = '\0';
        return;
    }
    reverseString(arr + 1, rev);
    int len = strlen(rev);
    rev[len] = *arr;
    rev[len + 1] = '\0';
}


int main() {
	int size;
	 printf("Enter the maximum length of the string: ");
    scanf("%d", &size);
	 char *arr = (char *)malloc((size + 1) * sizeof(char));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
      printf("Enter a string: ");
  scanf(" %[^\n]", arr);
    char rev[50];
    
reverseString(arr,rev);
printf(" %s", rev);
 free(arr);
    return 0;
}
