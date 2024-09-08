#include <stdio.h>
#include <math.h>

int main (){

    double distance, min, sec, fps, mps, feet,m;

    printf("Panjang track lari (miles) = ");
    scanf("%lf", &distance);
    feet = distance * 5280;
    m = feet / 3.280;

    double totalSeconds;
    printf("Waktu pelari A (minutes seconds) = ");
    scanf("%lf %lf", &min, &sec);
    totalSeconds = min * 60 + sec;
    fps = feet / totalSeconds;
    mps = m / totalSeconds; 
    printf("Speed = %.2lf fps, %.2lf mps \n",fps , mps);

    printf("Waktu pelari B (minutes seconds) = ");
    scanf("%lf %lf", &min, &sec);
    totalSeconds = min * 60 + sec;
    fps = feet / totalSeconds;
    mps = m / totalSeconds; 
    printf("Speed = %.2lf fps, %.2lf mps \n",fps , mps);
    
    printf("Waktu pelari C (minutes seconds) = ");
    scanf("%lf %lf", &min, &sec);
    totalSeconds = min * 60 + sec;
    fps = feet / totalSeconds;
    mps = m / totalSeconds; 
    printf("Speed = %.2lf fps, %.2lf mps \n",fps , mps);

    printf("Waktu pelari D (minutes seconds) = ");
    scanf("%lf %lf", &min, &sec);
    totalSeconds = min * 60 + sec;
    fps = feet / totalSeconds;
    mps = m / totalSeconds; 
    printf("Speed = %.2lf fps, %.2lf mps \n",fps , mps);




    return 0;
}   