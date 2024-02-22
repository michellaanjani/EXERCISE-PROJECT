//MICHELLA MARIA ANJANI

#include <stdio.h>
#include <string.h>
/*standard input/output library (stdio.h) and the string manipulation library (string.h) 
to use functions like printf, fgets, strlen, and strcspn.*/
int main() //This is the beginning of the main function, the entry point for the program.
{
    char input[101];  // Maximum string length is 100

    printf("Input: ");
    fgets(input, sizeof(input), stdin);/*Reads a line of text from the standard input (stdin) 
    and stores it in the input array. The sizeof(input) ensures that fgets doesn't read more 
    characters than the size of the array can hold*/
    

    int length = strlen(input);/*Calculates the length of the input string using the strlen 
    function and stores it in the variable length.*/

    // Reverse the string
    char reversed[101]; //declare var reversed
    for (int i = 0; i < length; i++) {
        reversed[i] = input[length - i - 1];
    }
    reversed[length] = '\0';  // Null-terminate the reversed string

    // Toggle the case
    for (int i = 0; i < length; i++) {
        if (reversed[i] >= 'a' && reversed[i] <= 'z') {
            reversed[i] = reversed[i] - 'a' + 'A';
        } else if (reversed[i] >= 'A' && reversed[i] <= 'Z') {
            reversed[i] = reversed[i] - 'A' + 'a';
        }
    }
    /*This loop iterates through the characters in the reversed 
    string and checks if they are lowercase or uppercase letters. 
    It then toggles the case of each character by adjusting its ASCII value.*/

    printf("Output: %s", reversed);

    return 0;
}

