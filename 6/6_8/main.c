#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input_name[256];
    char output_name[256];
    int key;

    printf("Enter input filename: ");
    scanf("%255s", input_name);

    do {
        printf("Enter key (integer between 2 and 10): ");
        scanf("%d", &key);
        if (key < 2 || key > 10)
            printf("Invalid key! Must be between 2 and 10.\n");
    } while (key < 2 || key > 10);

    char *dot = strrchr(input_name, '.');
    if (dot) {
        int base_len = (int)(dot - input_name);
        snprintf(output_name, sizeof(output_name), "%.*s_encoded%s",
                 base_len, input_name, dot);
    } else {
        snprintf(output_name, sizeof(output_name), "%s_encoded", input_name);
    }

    FILE *fin = fopen(input_name, "r");
    if (!fin) {
        printf("Error: cannot open '%s'\n", input_name);
        return 1;
    }

    FILE *fout = fopen(output_name, "w");
    if (!fout) {
        printf("Error: cannot create '%s'\n", output_name);
        fclose(fin);
        return 1;
    }

    int ch;
    int first = 1;
    while ((ch = fgetc(fin)) != EOF) {
        int encoded = ch * key;
        if (!first) fprintf(fout, " ");
        fprintf(fout, "%d", encoded);
        first = 0;
    }

    fclose(fin);
    fclose(fout);

    printf("\nFile '%s' encoded with key %d.\n", input_name, key);
    printf("Encoded file saved as: '%s'\n", output_name);

    return 0;
}