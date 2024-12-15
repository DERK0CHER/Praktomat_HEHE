#include <stdio.h>
#include <stdlib.h>

    

  
    
    
    void Number_to_text(int number)
    switch(number){
        case 0: printf("ZERO \n");break;
        case 1: printf("ONE \n");break;
        case 2: printf("TWO \n");break;
        case 3: printf("THREE \n");break;
        case 4: printf("FOUR \n");break;
        case 5: printf("FIVE \n");break;
        case 6: printf("SIX \n");break;
        case 7: printf("SEVEN \n");break;
        case 8: printf("EIGHT \n");break;
        case 9: printf("NINE \n");break;

    default:
        printf("Invalid Number, please enter a number between 1 and 0");
    };
     } else {
        printf("Invalid input. Please enter a valid number.\n");
    }
    int main(void){  
        printf("give me a number between 0 and 999:\n");
        if (scanf("%d", &number) == 1) {
    return EXIT_SUCCESS;
};