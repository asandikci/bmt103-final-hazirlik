#include <stdio.h>

// ÖRNEK 10
// Parametre olarak bir tam sayı dizisini ve dizinin eleman sayısını alıp
// dizideki sayıların toplamını döndüren "DiziToplam" isimli C fonksiyonunu yazınız


int DiziToplam(int* arr, int n){
  int toplam=0;
  for(int i = 0; i<n; i++){
    toplam+=arr[i];
  }
  return toplam;
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("%d", DiziToplam(arr, 10));
}
