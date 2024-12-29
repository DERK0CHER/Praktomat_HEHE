
#include<stdio.h>

void Math(int a);

int main() {
    int n;

    printf("Please enter the number which should be factorized:");
    scanf("%d", &n);

    Math(n);

    return 0;
}
    void Math(int a){
           if (a <= 1) {
        printf("The entered number is invalid!");
        return;
        }
        while (a % 2 == 0) {
        printf("%d ", 2);
        a = a / 2;
        }

        for (int i = 3; i <= a; i = i + 2) {
        while(a % i == 0) {
            printf("%d ", i);
            a = a / i;
        }
        }
        if (a > 2) {
        printf("%d ", a);
        }

    printf("\n");
 
    }
