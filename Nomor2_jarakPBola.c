/* Nama         : Hasan Suryadharma
   NIM          : 24060123140208
   Kelas        : C
   Nama Program : jarakPBola.c
   Deskripsi    : Menghitung jarak (y dalam meter) yang ditempuh benda yang mengalami gerak gerak parabola
*/
#include <stdio.h>

int main() {
  int V0, t;
  float g, y;
  printf("Kecepatan awal(Vo) :");
  scanf("%d", &V0);
  printf("Waktu(t) :");
  scanf("%d", &t);
  printf(" Konstanta Gravitasi(g) :");
  scanf("%f", &g);

  //Menghitung
  y = V0*t-0.5*(g*t*t);
  printf("Hasil:%.2f", y);
  return 0;  
}

