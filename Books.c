/*
Name: Alois Muli
Reg. No: D33-2055-2022
Unit Code: BMS 201
Assignment
*/
#include <stdio.h>
#include <stdlib.h>

struct Date {
int day;
int month;
int year;
};

// Function to calculate the difference in days between two dates
int dateDifference(struct Date start, struct Date end) {
// Convert both dates to "days since a base date"
int totalStartDays = start.year * 365 + start.month * 30 + start.day;
int totalEndDays = end.year * 365 + end.month * 30 + end.day;

return totalEndDays - totalStartDays;
}

int main() {
// Define variables
char bookID[20];
struct Date dueDate, returnDate;
int daysOverdue, fineRate, fineAmount;

// Take input from the user
printf("Enter the Book ID: ");
scanf("%s", bookID);

printf("Enter the Due Date (day month year): ");
scanf("%d %d %d", &dueDate.day, &dueDate.month, &dueDate.year);

printf("Enter the Return Date (day month year): ");
scanf("%d %d %d", &returnDate.day, &returnDate.month, &returnDate.year);

// Calculate the number of days overdue
daysOverdue = dateDifference(dueDate, returnDate);

// Determine the fine rate based on days overdue
if (daysOverdue <= 7) {
fineRate = 20;
} else if (daysOverdue >= 8 && daysOverdue <= 14) {
fineRate = 50;
} else if (daysOverdue >= 15) {
fineRate = 100;
}

// Calculate the fine amount
fineAmount = daysOverdue * fineRate;

// Display the results
printf("\n--- Overdue Book Details ---\n");
printf("Book ID: %s\n", bookID);
printf("Due Date: %02d-%02d-%d\n", dueDate.day, dueDate.month, dueDate.year);
printf("Return Date: %02d-%02d-%d\n", returnDate.day, returnDate.month, returnDate.year);
printf("Days Overdue: %d\n", daysOverdue);
printf("Fine Rate per day: Ksh %d\n", fineRate);
printf("Total Fine Amount: Ksh %d\n", fineAmount);

return 0;
}
