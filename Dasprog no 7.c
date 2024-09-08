#include <stdio.h>
#include <math.h>

int main(){

    double tax, initialHC, rate, houseCost, annualFC;

         tax = initialHC * rate * 5;
         houseCost = initialHC + (annualFC * 5) + tax;

    
    double HouseA, HouseB, HouseC;

    printf("Initial House A Cost, Annual Fuel Cost, Tax rate = ");
    scanf("%lf %lf %lf",&initialHC, &annualFC, &rate);
    tax = initialHC * rate * 5;
    houseCost = initialHC + (annualFC * 5) + tax;
    printf("House A Cost = %.0lf", houseCost);

    printf("\nInitial House B Cost, Annual Fuel Cost, Tax rate = ");
    scanf("%lf %lf %lf",&initialHC, &annualFC, &rate);
    tax = initialHC * rate * 5;
    houseCost = initialHC + (annualFC * 5) + tax;
    printf("House B Cost = %.0lf", houseCost);

    printf("\nInitial House C Cost, Annual Fuel Cost, Tax rate = ");
    scanf("%lf %lf %lf",&initialHC, &annualFC, &rate);
    tax = initialHC * rate * 5;
    houseCost = initialHC + (annualFC * 5) + tax;
    printf("House C Cost = %.0lf", houseCost);

    return 0;
}