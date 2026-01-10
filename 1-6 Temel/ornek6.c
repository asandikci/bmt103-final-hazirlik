#include <stdio.h>

// ÖRNEK 6
// Parametre olarak bir dikdörtgenin kısa ve uzun kenar uzunluklarını
// ondalıklı sayı olarak alan ve bu dikdörtgenin alanını
// hesaplayıp döndüren "alan" fonksiyonunu yazınız.

float alan(float x, float y){
  return x*y;
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%.3f", alan(4.1611, 7.45));
}
