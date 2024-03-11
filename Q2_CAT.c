#include <stdio.h>

int main() {
    float salary, tax = 0;

    // Prompt the user to enter yearly salary
    printf("Enter yearly salary: ");
    scanf("%f", &salary);

    // Calculate tax based on the given conditions
    if (salary <= 400000) {
        tax = salary * 0.01;
    } else if (salary > 400000 && salary <= 1000000) {
        tax = (400000 * 0.01) + ((salary - 400000) * 0.15);
    } else if (salary > 1000000) {
        tax = (400000 * 0.01) + (600000 * 0.15) + ((salary - 1000000) * 0.25);
    }

    // Print the calculated tax
    printf("Tax: %.2f\n", tax);

    return 0;
}
