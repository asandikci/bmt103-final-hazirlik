#include <stdio.h>

// ÖRNEK 19
// Parametre olarak 3x3 boyutunda bir tamsayı matrisi (iki boyutlu dizi) alan ve
// bu matrisin 4 köşesindeki elemanların toplamını dönen "KoseToplam" fonksiyonunu yazınız.


int KoseToplam(int matrix[][3]){
  return matrix[0][0] + matrix[0][2] + matrix[2][0] + matrix[2][2];
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int matrix[3][3]= {
    {8, 7, 14},
    {5, 21, 3},
    {98, 55, 9}
  };
  printf("%d", KoseToplam(matrix));
}
