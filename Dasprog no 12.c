#include <stdio.h>
#include <math.h>

/*

Soal : 

Write a program that calculates the acceleration (m/s2) of a jet fighter
launched from an aircraft-carrier catapult, given the jet’s takeoff speed in
km/hr and the distance (meters) over which the catapult accelerates the
jet from rest to takeoff. Assume constant acceleration. Also calculate the
time (seconds) for the fighter to be accelerated to takeoff speed. When
you prompt the user, be sure to indicate the units for each input. For one
run, use a takeoff speed of 278 km/hr and a distance of 94 meters. Relevant
formulas (v = velocity, a = acceleration, t = time, and s = distance)

v = at
s = 1/2 at^2 

*/

int main (){

    double TOspeed_kmh, Distance_m, TOspeed_ms;

    printf("Takeoff Speed (Km/H) =  ");
    scanf("%lf", &TOspeed_kmh);

    printf("Distance (m) = ");
    scanf("%lf", &Distance_m);

    TOspeed_ms = TOspeed_kmh * 1000/3600;
    printf("Take off speed (m/s) = %lf", TOspeed_ms);

    double percepatan, waktu;

    waktu = 2 * Distance_m / TOspeed_ms;
    printf("\nWaktu (s) = %lf", waktu);

    percepatan = TOspeed_ms / waktu;
    printf("\nPercepatan (m/s^2) = %lf",percepatan);


    return 0;
}