#include <stdio.h>
#include <stdlib.h>  

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student *s = (struct Student *) malloc(n * sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter marks of %s: ", s[i].name);
        scanf("%d", &s[i].marks);
    }

    printf("\nStudents scoring more than 75 marks:\n");

    for (int i = 0; i < n; i++) {
        if (s[i].marks > 75) {
            printf("%s - %d\n", s[i].name, s[i].marks);
        }
    }
    free(s);

    return 0;
}

