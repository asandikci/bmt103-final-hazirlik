#include <stdio.h>

// ÖRNEK 16
// Parametre olarak taban ve us değerlerini alan,
// bir for döngüsü kullanarak sonucu hesaplayan ve
// döndüren "usAl" fonksiyonunu yazınız (Kütüphane fonksiyonu kullanmayınız).


long long int usAl(int taban, int us){
  long long int sonuc=1;
  for (int i=0; i<us; i++) {
    sonuc*=taban;
  }
  return sonuc;
}



// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int taban = 2;
  int us = 12;
  printf("%lld", usAl(taban, us));
}
