#include <stdio.h>

// ÖRNEK 1
// Parametre olarak bir tam sayı alan ve
// bu sayının karesini hesaplayıp döndüren "kare" fonksiyonunu yazınız.


int kare(int a){
  return a*a;
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d", kare(10));
}
