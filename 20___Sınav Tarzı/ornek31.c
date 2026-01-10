#include <stdio.h>

// ÖRNEK 31
//
// Parametre olarak bir tamsayı dizisi ve dizinin boyutunu alan;
// diziyi küçükten büyüğe sıralayan bir fonksiyon yazınız.

void swap(int* arr, int i, int j){
  int gecici = arr[i];
  arr[i] = arr[j];
  arr[j] = gecici;
}

void sirala(int* arr, int n){
  for(int i=0;i<n-1;i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]>arr[j]){
        swap(arr, i, j);
      }
    }
  }
}



// Bakınız: Kabarcık Sıralama (Bubble Sort) Algoritması

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int arr[] = {8, 3, 19, 7, 1, 6, 8};
  sirala(arr, 7);
  for (int i=0; i<7; i++) {
    printf("%d ", arr[i]);
  }
}
