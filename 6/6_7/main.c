#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD 51

char **result = NULL;
int result_count = 0;

void add_word(const char *word) {
    result = realloc(result, (result_count + 1) * sizeof(char *));
    result[result_count] = malloc(strlen(word) + 1);
    strcpy(result[result_count], word);
    result_count++;
}

void free_result() {
    for (int i = 0; i < result_count; i++) free(result[i]);
    free(result);
    result = NULL;
    result_count = 0;
}

void read_and_filter() {
    FILE *f = fopen("input.txt", "r");
    if (!f) { printf("Cannot open input.txt\n"); return; }

    char **words = NULL;
    int word_count = 0;
    char buf[MAX_WORD];

    while (fscanf(f, "%50s", buf) == 1) {
        words = realloc(words, (word_count + 1) * sizeof(char *));
        words[word_count] = malloc(strlen(buf) + 1);
        strcpy(words[word_count], buf);
        word_count++;
    }
    fclose(f);

    if (word_count == 0) { printf("No words found.\n"); return; }

    free_result();

    add_word(words[0]);

    for (int i = 1; i < word_count; i++) {
        char last_char = tolower(result[result_count - 1][strlen(result[result_count - 1]) - 1]);
        char first_char = tolower(words[i][0]);
        if (first_char == last_char) {
            add_word(words[i]);
        }
    }

    for (int i = 0; i < word_count; i++) free(words[i]);
    free(words);

    FILE *bf = fopen("output.bin", "wb");
    if (!bf) { printf("Cannot open output.bin\n"); return; }

    for (int i = 0; i < result_count; i++) {
        fwrite(words[i], 1, strlen(result[i]), bf);
    }
    fclose(bf);

    bf = fopen("output.bin", "wb");
    if (!bf) { printf("Cannot open output.bin\n"); return; }
    for (int i = 0; i < result_count; i++) {
        fwrite(result[i], 1, strlen(result[i]), bf);
        if (i < result_count - 1) fwrite(" ", 1, 1, bf);
    }
    fclose(bf);

    printf("Done! %d words written to output.bin\n", result_count);
}

void print_binary() {
    FILE *bf = fopen("output.bin", "rb");
    if (!bf) { printf("Cannot open output.bin\n"); return; }

    printf("Contents of output.bin:\n");
    char ch[2] = {0, 0};
    char word[MAX_WORD];
    int idx = 0;

    int c;
    while ((c = fgetc(bf)) != EOF) {
        if (c == ' ' || c == '\0') {
            if (idx > 0) {
                word[idx] = '\0';
                printf("%s\n", word);
                idx = 0;
            }
        } else {
            if (idx < MAX_WORD - 1) word[idx++] = (char)c;
        }
    }
    if (idx > 0) {
        word[idx] = '\0';
        printf("%s\n", word);
    }
    fclose(bf);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Read input.txt and write to binary\n");
        printf("2. Print binary file contents\n");
        printf("0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 0) break;
        else if (choice == 1) read_and_filter();
        else if (choice == 2) print_binary();
        else printf("Invalid choice.\n");
    }

    free_result();
    return 0;
}