#include <stdio.h>

// ÖRNEK 17
// Parametre olarak bir tamsayı alan, eğer sayı asalsa 1
// değilse 0 döndüren "asalMi" fonksiyonunu yazınız.


int asalMi(int n){
  if(n==1){
    return 0;
  }
  for (int i=2; i<n; i++) {
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}



// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d\n", asalMi(97));
  printf("%d\n", asalMi(1));
  printf("%d\n", asalMi(2));
  printf("%d\n", asalMi(8));
}
