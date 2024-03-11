#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate;
    int daysOverdue;
    float fineAmount;
    
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);
    
    // Calculate the number of days overdue
    daysOverdue = returnDate - dueDate;
    
    // Determining fine rate and calculate fine amount
    if (daysOverdue <= 7) 
        fineAmount = daysOverdue * 20.0;
        
    if (daysOverdue <= 14) 
        fineAmount = 7 * 20.0 + (daysOverdue - 7) * 50.0;
    
        fineAmount = 7 * 20.0 + 7 * 50.0 + (daysOverdue - 14) * 100.0;
    
     // The results 
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Fine Rate: Ksh. %.2f per day\n", (daysOverdue <= 7) ? 20.0 : ((daysOverdue <= 14) ? 50.0 : 100.0));
    printf("Fine Amount: Ksh. %.2f\n", fineAmount);
    printf("Return Date: %d\n", returnDate);
    
    return 0;
}