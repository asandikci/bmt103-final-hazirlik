#include <limits.h>
#include <stdio.h>

// ÖRNEK 12
// Parametre olarak bir tamsayı dizisi ve dizinin boyutunu alan,
// dizideki en büyük elemanı bulup döndüren "EnBuyuk" fonksiyonunu yazınız.


int EnBuyuk(int* arr, int n){
  int max = INT_MIN;
  for (int i = 0; i < n; i++) {
    if(arr[i]>max){
      max = arr[i];
    }
  }
  return max;
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int arr[] = {19, 18, 7, 31, 54, -19, 99999, 28463};
  printf("%d", EnBuyuk(arr, 8));
}
