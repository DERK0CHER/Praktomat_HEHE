#include <stdio.h>
#include <math.h>

#define G 9.81
#define R 287
#define N 1.235
#define Tn 288.15
#define RHO_N 1.225

int main() {
    int latitude, longitude;
    double temperature, pressure;

    printf("Enter latitude, longitude, temperature (C), and pressure (hPa):\n");
    scanf("%d %d %lf %lf", &latitude, &longitude, &temperature, &pressure);

    if (!((latitude == 48 && longitude == 9) || (latitude == 52 && longitude == 13) ||
          (latitude == 48 && longitude == 11) || (latitude == 50 && longitude == 8))) {
        printf("Wrong coordinates entered!\n");
        return 1;
    }

    temperature += 273.15;
    pressure *= 100;

    double T0 = temperature;
    double rho0 = pressure / (R * T0);
    double rho = rho0 * pow(1 - ((N - 1) * G * 0) / (N * R * T0), 1 / (N - 1));
    double H = (pow(rho / RHO_N, (N - 1) / -N) - 1) * (R * Tn / G * N / (N - 1));

    printf("T0 = %.3fK, rho0 = %.3fkg/m3, rho = %.3fkg/m3, H = %.2fm\n", T0, rho0, rho, H);

    return 0;
}

