#include <stdio.h>
#include <string.h>

int main(){

    float chair = 13.99;
    float tableFor8 = 42.00;
    float sixGlasses = 5.98;
    float sixPlates = 21.02;

    float total = 0;

    int guests;
    printf("Enter number of guests: ");
    scanf("%d", &guests);
    getchar();

    char item[50];

    int chairsCount = 0;
    int tablesCount = 0;
    int glassesCount = 0;
    int platesCount = 0;

    while(1){
        printf("Enter item (or PARTY!): ");
        fgets(item, sizeof(item), stdin);
        item[strcspn(item, "\n")] = 0;

        if(strcmp(item, "PARTY!") == 0){
            break;
        }

        if(strcmp(item, "chair") == 0){
            total += chair;
            chairsCount += 1;
        }
        else if(strcmp(item, "table for 8") == 0){
            total += tableFor8;
            tablesCount += 1;
        }
        else if(strcmp(item, "six glasses") == 0){
            total += sixGlasses;
            glassesCount += 6;
        }
        else if(strcmp(item, "six plates") == 0){
            total += sixPlates;
            platesCount += 6;
        }
        else{
            printf("Invalid item!\n");
        }
    }

    int neededChairs = guests - chairsCount;
    int neededTables = (guests + 7) / 8 - tablesCount;
    int neededGlasses = guests - glassesCount;
    int neededPlates = guests - platesCount;

    if(neededChairs < 0) neededChairs = 0;
    if(neededTables < 0) neededTables = 0;
    if(neededGlasses < 0) neededGlasses = 0;
    if(neededPlates < 0) neededPlates = 0;

    printf("\nTotal spent: %.2f\n", total);

    printf("Still needed:\n");
    printf("Chairs: %d\n", neededChairs);
    printf("Tables: %d\n", neededTables);
    printf("Glasses: %d\n", neededGlasses);
    printf("Plates: %d\n", neededPlates);

    return 0;
}