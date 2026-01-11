#include <stdio.h>

// ÖRNEK 33
// Bir merdiveni çıkmak istiyorsunuz ve merdiven toplam n basamaktan oluşuyor.
// Her seferinde ya 1 basamak ya da 2 basamak atlayabiliyorsunuz.
// n. basamağa kaç farklı şekilde ulaşabileceğinizi hesaplayan bir fonksiyon yazınız.


int merdiven(int n){
  int arr[n+1];
  arr[1]=1;
  arr[2]=2;
  for(int i=3; i<=n; i++){
    arr[i]=arr[i-1]+arr[i-2];
  }
  return arr[n];
}

// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  printf("%d\n", merdiven(3)); // 1-1-1 | 1-2 | 2-1 --> 3
  printf("%d\n", merdiven(4));
  printf("%d\n", merdiven(5));
  printf("%d\n", merdiven(10));


}
