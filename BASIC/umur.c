#include <stdio.h>

int main() {
    char firstName[50];
    char lastName[50];
    int birthDay, birthMonth, birthYear;
    int currentYear = 2023; // Update this with the current year

    printf("First Name: ");
    scanf("%[^\n]s", firstName);

    printf("Last Name: ");
    scanf(" %[^\n]s", lastName); // Read the whole line as last name

    printf("Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    int age = currentYear - birthYear;

    printf("\nFull Name: %s %s\n", firstName, lastName);
    printf("Age: %d\n", age);

    return 0;
}

