#include <stdio.h>

// ÖRNEK 21
// Parametre olarak bir tamsayı dizisi ve dizinin boyutunu alan
// dizi elemanlarını bellek üzerinde yerinde (in-place) tersine çeviren
// (örneğin 1-2-3 -> 3-2-1) "cevir" fonksiyonunu yazınız.

void cevir(int* arr, int n){
  int gecici;
  for(int i = 0; i < (n/2); i++){
    gecici=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1] = gecici;
  }
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int dizi[] = {9, 8, 6, 2, 15};
  cevir(dizi, 5);
  for (int i = 0 ; i < 5; i++) {
    printf("%d ", dizi[i]);
  }
}
