#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student *stu = (struct Student *)malloc(n * sizeof(struct Student));
    if (stu == NULL) return 1;
    for (int i = 0; i < n; i++) {
        scanf("%s", stu[i].name);
        scanf("%f", &stu[i].marks);
    }

    for (int i = 0; i < n; i++) {
        if (stu[i].marks > 75) {
            printf("%s %.2f\n", stu[i].name, stu[i].marks);
        }
    }
    free(stu);
    return 0;
}
