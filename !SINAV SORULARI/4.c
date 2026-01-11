#include <stdio.h>

// SINAV SORUSU 4 - Kargo Yapısı
// a) içinde ağırlık, yükseklik, derinlik, genişlik değerleri olan bir KARGO yapısı tanımlayınız
// b) içinde kargo numarası, göndericinin kimlik numarası, alıcının kimlik numarası, teslim durumu ve KARGO yapısı
//    değerleri olan bir GONDERI yapısı tanımlayınız
// c) verilen GONDERI yapısındaki bir gonderinin bilgilerini ekrana yazdıran fonksiyonu yazınız

struct KARGO{
  float agirlik;
  float yukseklik;
  float derinlik;
  float genislik;
};

struct GONDERI{
  int kargoNo;
  long long int gondericiKimlikNo;
  long long int aliciKimlikNo;
  int teslimDurumu;
  struct KARGO kargo;
};

void kargoYazdir(struct GONDERI gonderi){
  printf("Kargo No: %d\n", gonderi.kargoNo);
  printf("Gonderen: %lld\n", gonderi.gondericiKimlikNo);
  printf("Alici: %lld\n", gonderi.aliciKimlikNo);
  if(gonderi.teslimDurumu==1){ // Durumlar tabii ki arttırılabilir
    printf("Durum: Gönderi Teslim Edildi\n");
  } else {
    printf("Durum: Gönderi Teslim Edilmedi\n");
  }
  printf("Kargo Agirligi: %.3f\n", gonderi.kargo.agirlik);
  printf("Kargo Boyutlari: %.3f - %.3f - %.3f\n", gonderi.kargo.yukseklik,
                                          gonderi.kargo.derinlik,
                                          gonderi.kargo.genislik);

}


// =============================================== //
// == BURADAN SONRASI YAZILMAYACAK-ELLENMEYECEK == //
// =============================================== //

int main() {
  struct KARGO kargo = {1.5, 2.7, 3.1, 3.1};
  struct GONDERI gonderi = {110, 111111111111, 1111111111112, 1, kargo};
  kargoYazdir(gonderi);
}
