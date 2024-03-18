/* Nama         : Hasan Suryadharma
   NIM          : 24060123140208
   Kelas        : C
   Nama Program : volBolaKerc.c
   Deskripsi    : Menghitung volume bola keucut
*/
#include <stdio.h>

int main() 
{
    int r;
    float Vb, Vk;
    const float PHI = 3.1415;

    printf("Masukkan jari-jari: ");
    scanf("%d", &r);
    
    // Menghitung Volume Bola
    Vb = (4.0 / 3.0) * PHI * r * r * r;
    
    
    Vk = 0.5 * Vb;
    
    printf("Volume Bola Kerucut: %.2f\n", Vk);
    return 0;
}
