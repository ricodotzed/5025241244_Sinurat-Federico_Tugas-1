
#include <stdio.h>
#include <math.h>

int main (){

    int a, b;
    
    printf("Nilai a = ", a);
    scanf("%d", &a);

    printf("Nilai b = ", b);
    scanf("%d", &b);

    while (a<b)
    {
        printf("Nilai a tidak bisa kurang dari b!\n");
        printf("Nilai a = ", a);
        scanf("%d", &a);

        printf("Nilai b = ", b);
        scanf("%d", &b);
    }
    
    
    int Sisi1, Sisi2, Hipotenusa;

    Sisi1 = pow(a, 2) - pow(b, 2);
    printf("\nSisi1 = %d", Sisi1);

    Sisi2 = 2 * a * b;
    printf("\nSisi2 = %d", Sisi2);

    Hipotenusa = sqrt((pow(Sisi1, 2) + pow(Sisi2, 2)));
    printf("\nHipotenusa = %d", Hipotenusa);


    return 0;
}