#include <stdio.h>
#include <math.h>



#define r  6378388 // earth radius in meters

double deplat;  //departure latitude
double arrlat; // arrival latitude
double arrlon; // arrival longitude
double deplon; // departure longitude

// functions to convert degrees to radians:
double sinDeg(double deg){
    
    return sin(deg * M_PI / 180);
}
double cosDeg(double deg){
    
    return cos(deg * M_PI / 180);
}
//function to calculate degree
void CalculateDegree(){
    deplat = deplat + deplon / 60; // floating point modulo instead of %, becoz % is only for integers
    deplon = fmod (deplon, 60);
    arrlat = arrlat + arrlon / 60;
    arrlon = fmod (arrlon, 60);
};


int main () {
    printf("Please enter latitude in° ’ ” and longitude in° ’ ” for departure and arrival:");
    scanf("%lf %lf %lf %lf", &deplat, &deplon, &arrlat, &arrlon);
   
    CalculateDegree();

    // Convert to decimal degrees
    double deplat_rad = deplat + deplon / 60.0;
    double arrlat_rad = arrlat + arrlon / 60.0;
    double deplon_rad = deplon;
    double arrlon_rad = arrlon;

    // convert decimals to radians
    deplat_rad = deplat_rad * M_PI / 180;
    arrlat_rad = arrlat_rad * M_PI / 180;
    deplon_rad = deplon_rad * M_PI / 180;
    arrlon_rad = arrlon_rad * M_PI / 180;
    

    double distance = r * acos(sinDeg(arrlat) * sinDeg(deplat) + cosDeg(arrlat) * cosDeg(deplat) * cosDeg(arrlon - deplon));

        printf("Flight Distance in km is: %f\n", distance / 1000.0); //revert meters to km
    return 0;
}