#include <stdio.h>

int main(){

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\t%d\n", ch, ch);
    }


    return 0;
}