#include <stdio.h>
#include <string.h>

int main() {
    char day[4];

    printf("Enter the first three letters of day: ");
    scanf("%s", day);

    if (strcmp(day, "fri") == 0 || strcmp(day, "sat") == 0 || strcmp(day, "sun") == 0) {
        printf("Enjoy your weekend");
    }
    else if (strcmp(day, "mon") == 0 || strcmp(day, "tue") == 0 ||
             strcmp(day, "wed") == 0 || strcmp(day, "thu") == 0) {
        printf("Enjoy your class");
    }
    else {
        printf("Invalid day");
    }

    return 0;
}
