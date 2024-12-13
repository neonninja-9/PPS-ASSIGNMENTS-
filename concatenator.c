#include <stdio.h>
void concatenate(char *str1, char *str2) {
    while (*str1) {
        str1++;
    }
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    char *ptr = str1;
    while (*ptr) {
        if (*ptr == '\n') {
            *ptr = '\0';
            break;
        }
        ptr++;
    }
    ptr = str2;
    while (*ptr) {
        if (*ptr == '\n') {
            *ptr = '\0';
            break;
        }
        ptr++;
    }
    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
