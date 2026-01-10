#include <stdio.h>

// ÖRNEK 3
// Parametre olarak bir tam sayı alan;
// sayı çift ise 1, tek ise 0 döndüren "kontrol" adlı fonksiyonu yazınız.
// fonksiyon içinde if-else deyimlerini kullanmayınız!


int kontrol(int a){
  return a%2==0?1:0;
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d\n", kontrol(5));
  printf("%d\n", kontrol(6));
}
