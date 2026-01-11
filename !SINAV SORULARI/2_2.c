#include <stdio.h>

// SINAV SORUSU 2 - Devrik Matris | DOĞRU ÇÖZÜM
// -SORU YAZILACAK-

// ======================
// Örnek Değerler
//   {2, -1, 7}
//   {9,  4, 6}
// ======================
// İstenen Çıktı
// { 2, 9}
// {-1, 4}
// { 7, 6}
// ======================


void devrik(int m, int n, int matris[m][n], int sonuc[n][m]){
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      sonuc[j][i] = matris[i][j];
    }
  }
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int m=2;
  int n=3;
  int matris[2][3] = {
    {2, -1, 7},
    {9,  4, 6}
  };

  int p[3][2];
  devrik(m, n, matris, p);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }
}
