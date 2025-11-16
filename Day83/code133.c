/*Create an enum for months and print how many days each month has.*/

#include <stdio.h>
#include <string.h>

// Enum for months
typedef enum 
{
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER, INVALID
} Month;

// Struct to map month name to days
typedef struct
 {
    const char *name;
    int days;      // normal days
    int leapDays;  // extra day for February
} MonthMap;

// Array mapping months
MonthMap months[] = 
{
    {"JANUARY", 31},
    {"FEBRUARY", 28, 29},
    {"MARCH", 31},
    {"APRIL", 30},
    {"MAY", 31},
    {"JUNE", 30},
    {"JULY", 31},
    {"AUGUST", 31},
    {"SEPTEMBER", 30},
    {"OCTOBER", 31},
    {"NOVEMBER", 30},
    {"DECEMBER", 31}
};

// Function to get month index from name
Month getMonth(const char *input)
 {
    for(int i = 0; i < 12; i++)
     {
        if(strcmp(input, months[i].name) == 0)
            return (Month)i;
    }
    return INVALID;
}

int main() 
{
    char input[20];

    printf("Enter month name : ");
    scanf("%s", input);

    // Convert input to uppercase for matching
    for(int i = 0; input[i]; i++)
     {
        if(input[i] >= 'a' && input[i] <= 'z')
            input[i] -= 32;
    }

    Month m = getMonth(input);

    if(m == INVALID) 
        printf("Invalid month entered.\n");
    else if(m == FEBRUARY) 
        printf("%s has %d and %d days\n", months[m].name, months[m].days, months[m].leapDays);
     else 
        printf("%s has %d days\n", months[m].name, months[m].days);

        return 0;
 }
