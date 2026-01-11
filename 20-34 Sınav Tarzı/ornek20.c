#include <stdio.h>

// ÖRNEK 20
// İki tamsayı değişkeninin adresini (pointer) parametre olarak alan ve
// bu iki değişkenin bellekteki değerlerini birbiriyle değiştiren "swap" fonksiyonunu yazınız.

void swap(int* a, int* b){
  int gecici = *a;
  *a = *b;
  *b = gecici;
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int x = 50, y = 100;
  swap(&x, &y);
  printf("%d %d", x, y);

}
