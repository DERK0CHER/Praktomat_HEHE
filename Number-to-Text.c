#include <stdio.h>


//Function to print the number as text
void Number_to_text(int number) {
    switch (number) {
        case 0: printf("ZERO ") ; break;
        case 1: printf("ONE ")  ; break;
        case 2: printf("TWO ")  ; break;
        case 3: printf("THREE "); break;
        case 4: printf("FOUR ") ; break;
        case 5: printf("FIVE ") ; break;
        case 6: printf("SIX ")  ; break;
        case 7: printf("SEVEN "); break;
        case 8: printf("EIGHT "); break;
        case 9: printf("NINE ") ; break;

    default: printf("Invalid Number "); break;
    }
}
//Function to convert a number to text
void number_to_text(int number) {
    int digits[3]; //array to store my digits
    int count = 0;

    if (number == 0) {
        Number_to_text(0);
        return;
    }
    while(number > 0){
        digits[count++] = number % 10;
        number /= 10;
    }
    //Reverse the print-order , dont ask questions -stack overflow- i dont understand y the code works :))
    for (int i = count - 1; i >= 0; i--) {
        Number_to_text(digits[i]);
    }
}
int main() {
    int number;
    while (1) {
        printf("Enter a number between 0 and 999: ");
        if (scanf("%d", &number) != 1) { // Check for invalid input
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (number < 0 || number > 999) {
            printf("Wrong number, try again!\n");
        } else {
            number_to_text(number);
            printf("\n");
        }
    }
    return 0;
}
