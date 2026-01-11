#include <stdio.h>

// SINAV SORUSU 1 - Tavşan Fibonacci
// -SORU YAZILACAK-

// a) f(n) bağıntısını matematiksel olarak yazınız
//
// CEVAP:
// f(n) {
//    1 , n<=2
//    f(n-1)+f(n-2), n>2
// }

// b) verilen bir n sayısı için n. aydaki tavşan çifti sayısını döndüren f(n) fonksiyonunu yazınız

int f(int n){
  if(n<=2){
    return 1;
  }
  return f(n-1)+f(n-2);
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d\n", f(1));
  printf("%d\n", f(2));
  printf("%d\n", f(3));
  printf("%d\n", f(4));
  printf("%d\n", f(5));
  printf("%d\n", f(6));
  printf("%d\n", f(7));
  printf("%d\n", f(8));
  printf("%d\n", f(9));
}
