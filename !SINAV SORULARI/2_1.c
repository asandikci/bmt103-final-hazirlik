#include <stdio.h>

// SINAV SORUSU 2 - Devrik Matris | YANLIŞ ÇÖZÜM !!!
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


int** devrik(int m, int n, int matris[m][n]){
  int devrik[n][m];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      devrik[j][i] = matris[i][j];
    }
  }
  return devrik;
}

// BU KODDA 2 KRITIK HATA VAR:
// 1) Döndürülen "devrik" dizisi int(*)[m] türünde iken fonksiyonumuz int** döndürmek istiyor
// 2) Burada döndürdüğümüz "devrik" iki boyutlu dizisi sadece yerelde (stack'te) tanımlı olduğu için
//    değerini doğru döndürsek bile o adresler artık bu dizi için tahsisli olmayacaktı.
//    Yani bir nevi bu fonksiyonun sonunda otomatik olarak free(devrik) yapıldığını düşünebilirsiniz

// call by reference ile çözümüne 2_2.c dosyasından,
// dinamik bellek yönetimi ile çözümüne 2_3.c dosyasından ulaşabilirsiniz


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

  int** p = devrik(m, n, matris);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }
}
