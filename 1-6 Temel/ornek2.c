#include <stdio.h>

// ÖRNEK 2
// Parametre olarak bir tam sayı alan;
// sayı çift ise 1, tek ise 0 döndüren "kontrol" adlı fonksiyonu yazınız.


int kontrol(int a){
  if(a%2==0){ // eğer a'nın 2'ye bölümünden kalan 0'a eşit ise
    return 1;
  } else {
    return 0;
  }
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d\n", kontrol(5));
  printf("%d\n", kontrol(6));
}
