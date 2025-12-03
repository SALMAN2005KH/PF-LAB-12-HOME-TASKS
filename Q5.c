#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);

    int len = strlen(s1) + strlen(s2) + 1;
    char *s3 = (char *)malloc(len);

    strcpy(s3, s1);
    strcat(s3, s2);

    printf("%s\n", s3);

    free(s3);
    return 0;
}
