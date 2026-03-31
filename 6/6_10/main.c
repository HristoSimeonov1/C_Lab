#include <stdio.h>
#include <string.h>

int isAnagram(char str1[], char str2[]) {
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    if(strlen(str1) != strlen(str2))
        return 0;

    for(i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }

    for(i = 0; i < 256; i++) {
        if(count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if(isAnagram(str1, str2))
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    else
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);

    return 0;
}