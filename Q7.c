#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPal(char s[], int start, int end) {
    if (start >= end) return 1;

    if (tolower(s[start]) != tolower(s[end]))
        return 0;

    return isPal(s, start + 1, end - 1);
}

int main() {
    char str[100];
    scanf("%s", str);

    int len = strlen(str);

    if (isPal(str, 0, len - 1))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
