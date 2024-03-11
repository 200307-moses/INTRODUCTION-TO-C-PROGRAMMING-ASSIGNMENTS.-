#include <stdio.h>

int main() {
    float principal_amount, interest_rate, time_period, simple_interest;

    // Prompt the user to enter principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal_amount);

    // Prompt the user to enter interest rate
    printf("Enter the interest rate (in percentage): ");
    scanf("%f", &interest_rate);

    // Prompt the user to enter time period
    printf("Enter the time period (in years): ");
    scanf("%f", &time_period);

    // Calculate simple interest
    simple_interest = (principal_amount * interest_rate * time_period) / 100;

    // Display the result
    printf("Simple interest: %.2f\n", simple_interest);

    return 0;
}