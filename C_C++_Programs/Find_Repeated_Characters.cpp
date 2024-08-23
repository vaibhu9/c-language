#include <stdio.h>
#include <string.h>

void find_repeated_characters(char *s) {
    int char_count[256] = {0}; // Assuming ASCII characters
    for (int i = 0; s[i] != '\0'; i++) {
        char_count[s[i]]++;
    }

    printf("Repeated characters: ");
    for (int i = 0; i < 256; i++) {
        if (char_count[i] > 1) {
            printf("%c ", i);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove the newline character at the end of input_string
    str[strcspn(str, "\n")] = '\0';

    find_repeated_characters(str);

    return 0;
}
