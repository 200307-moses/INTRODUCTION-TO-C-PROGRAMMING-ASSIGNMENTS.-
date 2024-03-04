#include<stdio.h>

int main() {
    float salary, bonus;
    int years_of_service;

    // Prompt the user to enter salary and years of service
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("Enter your years of service: ");
    scanf("%d", &years_of_service);

    // Check if the employee has more than 5 years of service
    if (years_of_service > 5) {
        
        // Calculate the bonus (5% of salary)
        bonus = 0.05 * salary;
        printf("Congratulations! You are eligible for a bonus of %.2f\n", bonus);
    } else {
        printf("Sorry, you are not eligible for a bonus.\n");
    }

    return 0;
}

