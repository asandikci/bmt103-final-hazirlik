#include <stdio.h>
#include <stdlib.h>

// ÖRNEK 32
// Parametre olarak bir pozitif tamsayı dizisi (dizi),
// bu dizinin boyutu (n) ve
// bu dizideki elemanların alabileceği en büyük değeri (max_deger) alan bir fonksiyon yazınız.
// Bu fonksiyon;
// 0 ile max_deger arasındaki her bir sayının dizide kaç kez tekrar ettiğini (frekansını) hesaplamalıdır.
// Hesaplama için:
// - Bellekte max_deger + 1 elemanlı bir alanı "calloc" kullanarak ayırınız (böylece tüm sayaçlar 0'dan başlar).
// - Orijinal diziyi tarayarak her sayının frekansını bu dinamik dizide artırınız.
// - Oluşturulan frekans dizisinin başlangıç adresini döndürünüz.
//
//

int* frekansBul(int* arr, int n, int max){
  int *freq=(int *)calloc(max+1, sizeof(int));

  if (freq == NULL) {
    printf("Bellek ayrilamadi!");
    return NULL;
  }

  for(int i=0; i<n;i++){
    *(freq+arr[i])+=1;
  }
  return freq;
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int arr[]={1, 7, 8, 3, 3, 3, 3, 4, 4, 4, 5, 6, 1, 2, 3, 4, 9, 7, 7, 0, 0};
  int n=sizeof(arr)/sizeof(int);
  int max_deger=10;

  int *p = frekansBul(arr, n, max_deger);

  for (int i=0; i<max_deger; i++) {
    printf("%d: %d\n",i, *(p+i));
  }
}
