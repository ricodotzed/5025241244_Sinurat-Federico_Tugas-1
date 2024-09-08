#include <stdio.h>
#include <math.h>

int main(){

    double initialV, finalV, time_interval, acceleration, time_to_rest;

    printf("Initial Velocity (mi/h) = ");
    scanf("%lf", &initialV);
    
    printf("Final Velocity (mi/h) = ");
    scanf("%lf", &finalV);
    
    printf("Time interval (min) = ");
    scanf("%lf", &time_interval);

    acceleration = (finalV - initialV)/(time_interval * 60);
    time_to_rest = (- initialV)/ acceleration;

    printf("The train acceleration (mi/s^2)= %.2lf", acceleration);
    printf("\nThe train time to rest (s)= %.2lf", time_to_rest);


    return 0;
}