/*Change the date format from dd/04/yyyy to dd-Apr-yyyy.*/

#include <stdio.h>

int main() 
{
    int day, month, year;
    char monthStr[4]; // To store month name in abbreviations

    // Array of month abbreviations
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Input date
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Check for valid month
    if(month < 1 || month > 12)
     {
        printf("Invalid month!\n");
        return 1;
    }

    // Get month abbreviation
    snprintf(monthStr, sizeof(monthStr), "%s", months[month - 1]);

    // Print in desired format
    printf("Formatted date: %02d-%s-%04d\n", day, monthStr, year);

    return 0;
}