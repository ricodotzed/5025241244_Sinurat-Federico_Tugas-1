#include <stdio.h>
#include <math.h>


int main() {
    int JmlMurid, JmlBagian, MuridSisa;

    printf("Masukkan Jumlah Murid yang Terdaftar: ");
    scanf("%d", &JmlMurid);

    printf("Jumlah Murid yang Terdaftar: %d\n", JmlMurid);

    JmlBagian = JmlMurid / 30;
    MuridSisa = JmlMurid % 30;

    printf("Jumlah bagian yang dibutuhkan: %d\n", JmlBagian);
    printf("Jumlah murid sisa: %d\n", MuridSisa);

    return 0;
}