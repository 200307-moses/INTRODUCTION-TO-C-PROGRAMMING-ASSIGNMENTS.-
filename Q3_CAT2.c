#include <stdio.h>

// A c program to compare numbers entered by the user

int main() {
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (number < 100) {
        printf("Your number is smaller than 100.\n");
    } else {
        printf("Your number contains more than two digits.\n");
    }

    return 0;
}
