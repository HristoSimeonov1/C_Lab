#include <stdio.h>

int countUpper(char text[]){
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] >= 'A' && text[i] <= 'Z')
            count++;
    }
    return count;
}

int countLower(char text[]){
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] >= 'a' && text[i] <= 'z')
            count++;
    }
    return count;
}

int countDigits(char text[]){
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] >= '0' && text[i] <= '9')
            count++;
    }
    return count;
}

int main(){
    char text[100];

    printf("Enter text: ");
    fgets(text, 100, stdin);

    printf("Uppercase: %d\n", countUpper(text));
    printf("Lowercase: %d\n", countLower(text));
    printf("Digits: %d\n", countDigits(text));

    return 0;
}