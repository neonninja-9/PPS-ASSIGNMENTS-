#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char ch;

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    printf("Enter the name of the destination file: ");
    scanf("%s", destFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", sourceFileName);
        exit(EXIT_FAILURE);
    }

    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file %s\n", destFileName);
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
