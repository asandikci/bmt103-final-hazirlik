#include <stdio.h>

// ÖRNEK 28
// Parametre olarak iki tamsayı alan ve
// bu iki sayının En Büyük Ortak Bölenini (EBOB)
// "özyinelemeli (recursive) mantık kullanarak"
// hesaplayıp döndüren fonksiyonu yazınız.


int ebob(int a, int b){
  if(b==0){
    return a;
  }
  return ebob(b, a%b);
}

// Bakınız: Öklid Algoritması

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d\n", ebob(72, 16));
  printf("%d\n", ebob(99, 100));
  printf("%d\n", ebob(25, 75));
}
