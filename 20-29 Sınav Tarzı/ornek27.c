#include <stdio.h>

// ÖRNEK 26
// Parametre olarak iki tamsayı alan ve
// bu iki sayının En Küçük Ortak Katını (EKOK)
// hesaplayıp döndüren fonksiyonu yazınız.


int ekok(int a, int b){
  int max = a>b?a:b;

  for(int i = max; i < a*b; i++){
    if((i%a==0) && (i%b==0)){
      return i;
    }
  }
  return a*b;
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d\n", ekok(72, 16));
  printf("%d\n", ekok(99, 100));
  printf("%d\n", ekok(25, 75));
}
