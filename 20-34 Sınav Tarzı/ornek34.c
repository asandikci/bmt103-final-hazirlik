#include <stdio.h>
#include <string.h>

// ÖRNEK 34
// Parametre olarak MxN boyutlarında iki boyutlu bir karakter dizisi,
// M (satır sayısı), N (sütün sayısı) alan ve
// en sol üstten en sağ aşağıya kadar boşluklardan geçmeden en kısa yoldan
// kaç farklı şekilde gidilebildiğini dönen fonksiyonu yazınız.
// '#' -> yol
// '-' -> boşluk
// Örnek Girdi:
//  #####         11111
//  ##--#   -->   12--1
//  #####         13334

int yolSayisi(char* matrix[], int M, int N){
  int sayi[M+1][N+1];
  memset(sayi, 0, sizeof(sayi)); // içini komple 0 yap

  if(matrix[0][0]=='-'){
    return 0;
  }
  sayi[1][1]=1;

  for(int i=1;i<=M;i++){
    for(int j=1;j<=N;j++){
      if(i==1 && j==1){continue;}
      if(matrix[i-1][j-1]=='#'){
        sayi[i][j]=sayi[i-1][j]+sayi[i][j-1];
      } else {
        sayi[i][j]=0;
      }
    }
  }
  return sayi[M][N];
}



// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  char *matrix[] = {"#####", "##--#", "#####"};
  printf("%d", yolSayisi(matrix, 3, 5));
}
