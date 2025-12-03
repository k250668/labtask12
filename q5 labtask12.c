#include <stdio.h>
#include <stdlib.h>  
#include <string.h>  

int main() {
    char str1[100], str2[100]; 
    char *str3;               
  
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    str3 = (char *) malloc(strlen(str1) + strlen(str2) + 1);
    if (str3 == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    strcpy(str3, str1);

    
    strcat(str3, str2);


    printf("Concatenated string: %s\n", str3);

    free(str3);

    return 0;
}

