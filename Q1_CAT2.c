
#include <stdio.h>

int main() {
    int customer_ID, unitConsumed;
    char customer_Name[30];

    // Prompt the user to enter CustomerID, CustomerName, and UnitConsumed
    printf("Enter Customer ID: ");
    scanf("%d", &customer_ID);
    printf("Enter Customer Name: ");
    scanf("%s", customer_Name);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitConsumed);

    // Calculate charges per unit based on the given criteria
    int chargesPerUnit;
    if (unitConsumed <= 300) {
        chargesPerUnit = 175;
    } else if (unitConsumed > 300 && unitConsumed < 600) {
        chargesPerUnit = 200;
    } else if (unitConsumed >= 600 && unitConsumed < 800) {
        chargesPerUnit = 300;
    } else if (unitConsumed >= 800){
     chargesPerUnit = 400;
    }

    // Calculate total bill
    int total_Bill = unitConsumed * chargesPerUnit;

    // Apply surcharge if bill exceeds Kshs. 500
    if (total_Bill > 500) {
        total_Bill += total_Bill * 0.20; // 20% surcharge
    }

    // Ensure that minimum bill is Kshs. 200
    if (total_Bill < 200) {
        total_Bill = 200;
    }

    // Display output
    printf("\nCustomer ID: %d\n", customer_ID);
    printf("Customer Name: %s\n", customer_Name);
    printf("Units Consumed: %d\n", unitConsumed);
    printf("Charges per Unit: Ksh %d\n", chargesPerUnit);
    printf("Total Amount to Pay: Ksh %d\n", total_Bill);

    return 0;
}
 