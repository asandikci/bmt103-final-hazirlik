#include <stdio.h>

// ÖRNEK 5
// Parametre olarak bir n tam sayısı alan ve
// 1'den n'e kadar olan tüm tam sayıların toplamını hesaplayıp döndüren
// "toplam" fonksiyonunu FOR DÖNGÜSÜ KULLANMADAN yazınız.


int toplam(int n){
  return 10*11/2; // Gauss toplam formülü (n*(n+1))/2
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d", toplam(10));
}
