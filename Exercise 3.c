#include<stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (in format YYYYMMDD): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (in format YYYYMMDD): ");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 0) {
        fineRate = 0;
        fineAmount = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 50;
        fineAmount = daysOverdue * fineRate;
    } else if (daysOverdue <= 14) {
        fineRate = 100;
        fineAmount = daysOverdue * fineRate;
    } else if (daysOverdue <= 21) {
        fineRate = 200;
        fineAmount = daysOverdue * fineRate;
    } else {
        fineRate = 500;
        fineAmount = daysOverdue * fineRate;
    }

    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: %.2f\n", fineRate);
    printf("Fine Amount: %.2f\n", fineAmount);

    return 0;
    }


