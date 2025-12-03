#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;

    printf("Enter maximum length of the string: ");
    scanf("%d", &size);
    getchar();

    char *str = (char *)malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(str, size, stdin);

    int len = strlen(str);
  
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    free(str);

    return 0;
}
