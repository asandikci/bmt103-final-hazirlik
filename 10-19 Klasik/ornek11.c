#include <stdio.h>

// ÖRNEK 11
// Parametre olarak satır sayısını (n) alan ve ekrana n satırlık bir dik üçgen
// (her satırda satır sayısı kadar yıldız *) basan "ucgen" fonksiyonunu yazınız.


void ucgen(int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  ucgen(5);
}
