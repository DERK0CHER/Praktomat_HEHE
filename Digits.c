#include  <stdio.h>
#include  <math.h>

#define k 100000000 // we use 10^10 as the modulo value
int number;
int digit;
int sum = 0;

int unsigned long long n;
unsigned long int calculate_sum(unsigned long long n);

int main() {
    


    printf("Please enter the highest value, which will be selected: ");
    scanf("%llu", &n);

    // calculation of the last 8 digits
    long unsigned int result = calculate_sum(n);

    // Ausgabe
    printf("The last digits of the series are %08lu\n", result);

    return 0;
}

//function to calculate sum k^k n;
unsigned long int calculate_sum(unsigned long long n) {
    unsigned long int sum = 0;
    for (unsigned long long i = 1; i <= n; i++) {
        unsigned long long term = i;
        for (unsigned long long j = 1; j < i; j++) {
            term = (term * i) % k;
        }
        sum = (sum + term) % k;
    } 

    return sum;

}