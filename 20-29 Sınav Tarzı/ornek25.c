#include <stdio.h>

// ÖRNEK 25
// Parametre olarak bir tamsayı dizisi ve dizinin boyutunu (n) alan;
// dizinin tüm elemanlarının toplamını "özyinelemeli" olarak hesaplayan fonksiyonu yazınız.


int yinelemeliToplam(int* arr, int n){
  if(n==0){
    return 0;
  }
  return yinelemeliToplam(arr, n-1) + arr[n-1];
}

// --- ÖZYİNELEME ADIMLARI (CALL STACK) ---
// 1. yinelemeliToplam(arr, 6) -> yinelemeliToplam(arr, 5) + arr[5] (6)
// 2. yinelemeliToplam(arr, 5) -> yinelemeliToplam(arr, 4) + arr[4] (5)
// 3. yinelemeliToplam(arr, 4) -> yinelemeliToplam(arr, 3) + arr[3] (4)
// 4. yinelemeliToplam(arr, 3) -> yinelemeliToplam(arr, 2) + arr[2] (3)
// 5. yinelemeliToplam(arr, 2) -> yinelemeliToplam(arr, 1) + arr[1] (2)
// 6. yinelemeliToplam(arr, 1) -> yinelemeliToplam(arr, 0) + arr[0] (1)
// 7. yinelemeliToplam(arr, 0) -> return 0 (BASE CASE)

// --- GERİ DÖNÜŞ VE HESAPLAMA (UNWINDING) ---
// 7. Adım -> 0 döndürür.
// 6. Adım -> 0 + 1 = 1 döndürür.
// 5. Adım -> 1 + 2 = 3 döndürür.
// 4. Adım -> 3 + 3 = 6 döndürür.
// 3. Adım -> 6 + 4 = 10 döndürür.
// 2. Adım -> 10 + 5 = 15 döndürür.
// 1. Adım -> 15 + 6 = 21 döndürür.

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  printf("%d", yinelemeliToplam(arr, 6));
}
