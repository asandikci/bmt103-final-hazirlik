#include <stdio.h>
#include <stdlib.h>

// ÖRNEK 29
// Parametre olarak bir tamsayı pointer'ı (dizinin adresi), mevcut boyutu ve
// eklenecek yeni elemanı alan;
// realloc kullanarak dizinin boyutunu bir artırıp yeni elemanı dizinin sonuna ekleyen ve
// dizinin yeni adresini "call by reference" ile güncelleyen fonksiyonu yazınız.


void diziGuncelle(int** arr, int* n, int yeni){
  *arr = (int *)realloc(*arr, (*n+1) * sizeof(int));
  (*arr)[*n] = yeni;
  (*n)++;
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int size = 0;
  int *arr = NULL;
  diziGuncelle(&arr, &size, 1);
  diziGuncelle(&arr, &size, 2);
  diziGuncelle(&arr, &size, 3);

  for(int i=0; i<size; i++){
    printf("%d ", *(arr+i));
  }

}
