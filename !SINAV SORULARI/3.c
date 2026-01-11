#include <stdio.h>

// SINAV SORUSU 3 - Hata Oranı
// -SORU YAZILACAK-

int toplam;
float hataOrani(int* gercek, int* tahmin, int n){
  for (int i=0; i<n; i++) {
    toplam+= (gercek[i]-tahmin[i])*(gercek[i]-tahmin[i]);
  }
  return (float)toplam/(float)n;
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int gercek[] = {1, 2, 3, 4, 5, 6};
  int tahmin[] = {6, 4, 3, 4, 2, 1};
  int n = 6;
  printf("%f", hataOrani(gercek, tahmin, n));
}
