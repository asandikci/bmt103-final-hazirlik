#include <stdio.h>

// ÖRNEK 26
// Parametre olarak iki tamsayı alan ve
// bu iki sayının En Büyük Ortak Bölenini (EBOB)
// hesaplayıp döndüren fonksiyonu yazınız.


int ebob(int a, int b){
  int min = a<b?a:b;

  for(int i = min; i > 1; i--){
    if((a%i==0) && (b%i==0)){
      return i;
    }
  }
  return 1;
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d\n", ebob(72, 16));
  printf("%d\n", ebob(99, 100));
  printf("%d\n", ebob(25, 75));
}
