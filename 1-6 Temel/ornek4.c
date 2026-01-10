#include <stdio.h>

// ÖRNEK 4
// Parametre olarak bir n tam sayısı alan ve
// 1'den n'e kadar olan tüm tam sayıların toplamını hesaplayıp döndüren
// "toplam" fonksiyonunu yazınız.


int toplam(int n){
  int top=0;
  for(int i=1; i<=n; i++){
    top+=i;
  }
  return top;
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d", toplam(10));
}
