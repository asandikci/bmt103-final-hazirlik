#include <stdio.h>
#include <stdlib.h>

// ÖRNEK 22
// Bir tamsayı dizisini ve boyutunu parametre olarak alan;
// dizi içindeki tek sayıları sayan,
// bu sayı kadar bellekte malloc ile yeni bir alan açan ve
// tek sayıları bu yeni diziye kopyalayıp yeni dizinin adresini döndüren fonksiyonu yazınız.

int* yeniDizi(int* arr, int n){
  int tek=0;
  for(int i=0; i<n; i++){
    if(arr[i]%2==1){
      tek++;
    }
  }

  int* adres = malloc(tek * sizeof(int));

  int j=0;
  for(int i=0; i<n; i++){
    if(arr[i]%2==1){
      *(adres+j)=arr[i];
      j++;
    }
  }

  return adres;
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int dizi[] = {9, 8, 6, 2, 15};
  int* yeniAdres;
  yeniAdres = yeniDizi(dizi, 5);
  printf("%p\n", yeniAdres);
  printf("%d\n", *yeniAdres);
  printf("%d\n", *(yeniAdres+1));
}
