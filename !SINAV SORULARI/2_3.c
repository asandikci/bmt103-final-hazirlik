#include <stdio.h>
#include <stdlib.h>

// SINAV SORUSU 2 - Devrik Matris
// KISMİ DOĞRU ÇÖZÜM (devrik hâli için call by reference kullanılmadığı için tam puan almayabilir - güncelleme: tam puan aldı, bilginize)
//
// m satır sayısı, n sütün sayısı olmak üzere m*n boyutunda bir matris'in devriğini (transpose) alan fonksiyonu
// call by reference kullanarak yazınız. Devriğini almak: sütunları satır/satırları sütün yapmak

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


int** devrik(int m, int n, int** matris){
  int** devrik = (int**) malloc(n * sizeof(int*));
  for(int i=0;i<n;i++){
    *(devrik+i) = (int*) malloc(m * sizeof(int));
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      devrik[j][i] = matris[i][j];
    }
  }
  return devrik;
}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  int m=2;
  int n=3;
  int** matris = (int**) malloc(m * sizeof(int*));
  for(int i=0;i<m;i++){
    *(matris+i) = (int*) malloc(n * sizeof(int));
  }

  matris[0][0] = 2;
  matris[0][1] = -1;
  matris[0][2] = 7;
  matris[1][0] = 9;
  matris[1][1] = 4;
  matris[1][2] = 6;

  int** p = devrik(m, n, matris);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }
}
